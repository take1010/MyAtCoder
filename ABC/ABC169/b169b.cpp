#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define MOD 1000000007
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

int main(){
    ll n;
    cin >> n;

    vector<ll> a(n);
    rep(i, n) cin >> a[i];

    int counter=0;
    rep(i, n) if(a[i]==0) counter++;
    if(counter){
        cout << 0 << endl;
        return 0;
    }

    ll ans=1;
    ll MAX=(1E+18);
    rep(i, n){
        if(a[i] <= MAX/ans){
            ans *= a[i];
        }else{
            cout << -1 << endl;
            return 0;
        }
    }
    cout << ans << endl;
}
