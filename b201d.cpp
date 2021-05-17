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
	int h,w;
	cin>>h>>w;
	vector<vector<char>> mp(h, vector<char>(w));
	vector<vector<int>> dp(h, vector<int>(w, -10000));
	
	int now;

	rep(i, h) rep(j, w) cin>>mp[i][j];

	dp[h-1][w-1]=0;
	for(int i=h-1; i>=0; i--) for(int j=w-1; j>=0; j--){
		if(mp[i][j]=='+') now=1;
		else now=-1;

		if(i) chmax(dp[i-1][j], -dp[i][j]+now);
		if(j) chmax(dp[i][j-1], -dp[i][j]+now);
	}

	// cout<<dp[0][0]<<endl;
	if(dp[0][0]>0) cout<<"Takahashi"<<endl;
	else if(dp[0][0]<0) cout<<"Aoki"<<endl;
	else cout<<"Draw"<<endl;
	
	return 0;
}