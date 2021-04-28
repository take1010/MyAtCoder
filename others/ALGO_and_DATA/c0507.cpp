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
	int n, w;
    cin>>n>>w;
    vector<int> weight(n), value(n);
    rep(i, n)cin>>weight[i]>>value[i];

    // dpの初期化
    vector<vector<int>> dp(n+1, vector<int>(w+1, 0));


    // 更新式
    rep(i, n){
        rep(j, w+1){
            if(j-weight[i]>=0) chmax(dp[i+1][j], dp[i][j-weight[i]]+value[i]);
            chmax(dp[i+1][j], dp[i][j]);
        }
    }

    coutVEC2(dp);
	return 0;
}