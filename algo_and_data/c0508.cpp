#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define rep(i, n) for(ll i = 0; i < (ll)(n); i++)
#define MOD 1000000007
#define coutALL(x) for(auto i=x.begin();i!=--x.end();i++) cout<<*i<<" ";cout<<*--x.end()<<endl;
#define coutVEC2(x) rep(j, x.size()) {auto y=x.at(j); coutALL(y);}
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

int main(){
	string s, t;
	s="logistic";
	t="algorithm";

	int INF = 1 << 29;
	vector<vector<int>> dp(s.size()+1, vector<int>(t.size()+1, INF));

	// 初期値
	dp[0][0]=0;

	// 更新
	rep(i, s.size()+1) rep(j, t.size()+1){
		if(i>0 && j>0){
			if(s[i-1]==t[j-1]) chmin(dp[i][j], dp[i-1][j-1]);
			else chmin(dp[i][j], dp[i-1][j-1]+1);
		}
		if(i>0) chmin(dp[i][j], dp[i-1][j]+1);
		if(j>0) chmin(dp[i][j], dp[i][j-1]+1);
	}


	coutVEC2(dp);
	cout<<"ans: "<<dp[s.size()][t.size()]<<endl;
	return 0;
}