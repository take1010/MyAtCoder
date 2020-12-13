#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define MOD 1000000007
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

int main(){
    ll ans=1, l;
    cin >> l;
    l -= 12;

    set<ll> s;
    for(ll i=2; i<=11;i++){
        s.insert(i);
    }

    for(int i=1; i<=11; i++){
        ans *= (l+i);
        for(ll j: s){
            if(ans%j == 0){
                ans /= j;
                s.erase(j);
            }
        }
    }
    

    cout << ans << endl;

	return 0;
}
