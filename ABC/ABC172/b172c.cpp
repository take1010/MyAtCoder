#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define MOD 1000000007
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

int main(){
	ll n, m, k;
    cin >> n >> m >> k;
    vector<ll> a(n+1), b(m+1);

    a[0]=0;
    b[0]=0;
    rep(i, n) cin >> a[i+1];
    rep(i, m) cin >> b[i+1]; 

    for(int i=1; i<=n; i++) a[i] += a[i-1];
    for(int i=1; i<=m; i++) b[i] += b[i-1];

    // rep(i, n+1) cout << a[i] << " ";
    // cout << endl;

    ll ans=0;
    rep(i, n+1){
        if(k<a[i]) continue;
        ll left=0, right=m+1;
        while(right-left>1){
            ll mid = left+(right-left)/2;
            if(a[i]+b[mid]<=k) left=mid;
            else right=mid;
        }
        chmax(ans, i+left);
    }

    cout << ans << endl;
    
	return 0;
}
