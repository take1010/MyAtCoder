#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define MOD 1000000007
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

int main(){
	ll n, d, d2, x, y, ans=0;
    
    cin >> n >> d;
    d2=d*d; 

    rep(i, n){
        cin >> x >> y;
        if(x*x+y*y<=d2) ans++;
    }

    cout << ans << endl;
	return 0;
}
