#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define MOD 1000000007
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

int main(){
    ll n, C, ans=0; 
    cin >> n >> C;

    ll MAX=0;
    vector<ll> x(1000001, 0), cumx(1000001, 0);

    ll a, b, c;
    rep(i, n){
        cin >> a >> b >> c;
        chmax(MAX, b);
        x[a-1] += c;
        x[b] -= c;
    }

    cumx[0] = x[0]; 
    for(int i=1; i<MAX; i++) cumx[i]=cumx[i-1]+x[i];
    for(ll i=0; i<MAX; i++) ans += min(C, cumx[i]);

    cout << ans << endl;

	return 0;
}
