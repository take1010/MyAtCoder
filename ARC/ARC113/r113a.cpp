#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define MOD 1000000007
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

int main(){
	ll k;
    cin >> k;

    ll a, b, ans=0;

    for(a=1; a*a*a<=k; a++){
        for(b=a; a*b*b<=k; b++){
            ll c=k/(a*b);
            if(a==b) ans += (c-b)*3+1;
            else ans += (c-b)*6+3;
        }
    }
	
    cout << ans << endl;
	return 0;
}
