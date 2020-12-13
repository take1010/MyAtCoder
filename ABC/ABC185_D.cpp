#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define MOD 1000000007
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

int main(){
    ll m, n;
    cin >> n >> m;

    ll buf;
    ll min = n;

    vector<ll> a;
    rep(i, m){
        cin >> buf;
        a.push_back(buf);
    }
    a.push_back(0);
    a.push_back(n+1);

    sort(a.begin(), a.end());

    // rep(i, m+2) cout << a[i] << endl;

    vector<ll> b;
    rep(i, m+1){
        buf = a[i+1]-a[i]-1;
        if(buf>0){
            b.push_back(buf);
            chmin(min, buf);
        }
    }
    
    // rep(i, b.size()) cout << b[i] << endl;
    ll ans = 0;

    rep(i, b.size()) ans += (b[i]-1)/min +1;
    cout << ans << endl;

	return 0;
}
