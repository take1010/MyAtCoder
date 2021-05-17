#include <bits/stdc++.h>
// #include <atcoder/all>
using namespace std;
// using namespace atcoder;
typedef long long ll;
const ll MOD = 1000000007;

#define rep(i, n) for(ll i = 0; i < (ll)(n); i++)
#define coutALL(x) for(auto i=x.begin();i!=--x.end();i++) cout<<*i<<" ";cout<<*--x.end()<<endl;
#define coutVEC2(x) rep(j, x.size()) {auto y=x.at(j); coutALL(y);}
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

int main(){
	int n, w;
	cin>>n>>w;
	vector<pair<int, ll>> item(n);
	rep(i, n) cin>>item[i].first>>item[i].second;

	ll DP_MAX=100001;
	ll INF=1e12;
	vector<vector<ll>> dp(n+1, vector<ll>(DP_MAX, INF));
	dp[0][0]=0;
	rep(i, n){
		rep(j, DP_MAX){
			chmin(dp[i+1][j], dp[i][j]);
			if(j+item[i].second<DP_MAX) chmin(dp[i+1][j+item[i].second], dp[i][j]+item[i].first);
		}
	}

	// coutVEC2(dp);
	for(int i=DP_MAX-1; i>=0; i--){
		if(dp[n][i]<=w){
			cout<<i<<endl;
			break;
		}
	}
	return 0;
}