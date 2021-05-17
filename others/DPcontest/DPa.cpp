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
	int n;
	cin>>n;
	vector<int> h(n), dp(n);
	rep(i, n) cin>>h[i];

	int INF=1e9+1;
	dp.assign(n, INF);
	dp[0]=0;

	rep(i, n){
		if(i+1<n) chmin(dp[i+1], dp[i]+abs(h[i]-h[i+1]));
		if(i+2<n) chmin(dp[i+2], dp[i]+abs(h[i]-h[i+2]));
	}
	cout<<dp[n-1]<<endl;
	return 0;
}