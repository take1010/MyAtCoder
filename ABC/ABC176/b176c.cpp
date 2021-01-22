#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define MOD 1000000007
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

int main(){
	ll ans=0, maxa=0, x, n;

    cin >> n;

    rep(i, n){
        cin >> x;
        if(x>maxa) maxa=x;
        else ans += maxa-x; 
    }

    cout << ans << endl;

	return 0;
}
