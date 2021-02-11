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

    set<ll> s;

    for(ll i=1; i*i<=n; i++){
        if(n%i == 0){
            s.insert(i);
            s.insert(n/i);
        }
    }
    ll ans=0;

    for(ll i: s){
        if(i!=1){
            ll count=0;
            while(n%i==0){
                count++;
                n /= i;
            }
            ll j=1;
            while(count-j>=0){
                count -= j;
                ans++;
                j++;
            }
        }
    }
	cout << ans << endl;
	return 0;
}
