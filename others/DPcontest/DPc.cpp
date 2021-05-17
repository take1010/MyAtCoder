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
	
	vector<vector<int>> dp(n, vector<int>(3));
	vector<vector<int>> happy(n, vector<int>(3));
	rep(i, n) rep(j, 3) cin>>happy[i][j];

	rep(j, 3) dp[0][j]=happy[0][j];

	rep(i, n){
		if(i+1<n){
			rep(j, 3) rep(k, 3){
				if(j!=k) chmax(dp[i+1][j], dp[i][k]+happy[i+1][j]);
			}
		}
	}

	cout<<max({dp[n-1][0], dp[n-1][1], dp[n-1][2]})<<endl;
	return 0;
}