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
	int n;
    cin>>n;
    vector<ll> h(n), dp(n);
    
    rep(i, n) cin>>h[i];
    ll INF= 1LL<<60;
    dp.assign(n, INF);

    dp[0]=0;

    rep(i, n){
        if(i+1<n) chmin(dp[i+1], dp[i]+abs(h[i]-h[i+1]));
        if(i+2<n) chmin(dp[i+2], dp[i]+abs(h[i]-h[i+2]));
    }
    coutALL(dp);
    cout<<dp[n-1]<<endl;
	return 0;
}