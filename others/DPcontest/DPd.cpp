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

	vector<vector<ll>> dp(n+1, vector<ll>(w+1));

	rep(i, n) rep(j, w+1){
		chmax(dp[i+1][j], dp[i][j]);
		if(j+item[i].first <= w) chmax(dp[i+1][j+item[i].first], dp[i][j]+item[i].second);
	}

	cout<<dp[n][w]<<endl;
	return 0;
}