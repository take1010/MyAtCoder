#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define MOD 1000000007
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

int main(){
    int n;
    ll ans=0, x, buf=0, sa; 
    vector<ll> a;


    cin >> n;
    rep(i, n){
        cin >> x;
        a.push_back(x);
    }
    sort(a.begin(), a.end());

    for(int i=1; i<n; i++){
        sa = a[i]-a[i-1];
        ans += buf+i*sa;
        buf += i*sa;
    }
    cout << ans << endl;
	return 0;
}
