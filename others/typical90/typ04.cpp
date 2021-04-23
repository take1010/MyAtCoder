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
	ll h,w;
    cin>>h>>w;
    vector<vector<ll>> a(h, vector<ll>(w));
    vector<vector<ll>> b(h, vector<ll>(w));
    vector<ll> hsum(h);
    vector<ll> wsum(w);

    rep(i, h) rep(j, w) {
        cin >> a[i][j];
        hsum[i] += a[i][j];
        wsum[j] += a[i][j];
    }
    
    rep(i, h) rep(j, w) b[i][j] = hsum[i]+wsum[j]-a[i][j]; 
    coutVEC2(b);
}