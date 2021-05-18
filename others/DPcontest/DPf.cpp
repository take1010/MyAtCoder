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
	string s,t;
	cin>>s>>t;
	int slen=s.size();
	int tlen=t.size();
	vector<vector<int>> dp(slen+1, vector<int>(tlen+1));
	
	rep(i, slen+1) rep(j, tlen+1){
		if(i<slen && j<tlen) if(s[i]==t[j]) chmax(dp[i+1][j+1], dp[i][j]+1);
		if(i<slen) chmax(dp[i+1][j], dp[i][j]);
		if(j<tlen) chmax(dp[i][j+1], dp[i][j]);
	}
	// coutVEC2(dp);

	int tmp=dp[slen][tlen];
	int x=slen, y=tlen;

	string ans(tmp, '0');
	
	while(tmp>0){
		// cout<<"tmp: "<<tmp<<"   x: "<<x<<"   y: "<<y<<endl;
		if(s[x-1]==t[y-1]){
			tmp--;
			ans[tmp]=s[x-1];
			x--;
			y--;
		}else if(dp[x][y-1]>dp[x-1][y]){
			y--;
		}else{
			x--;
		}
	}
	cout<<ans<<endl;
	return 0;
}