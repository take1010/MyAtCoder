#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define MOD 1000000007
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

ll flo(ll x, ll A){
    return x-x%A;
} 
ll cei(ll x, ll A){
    return (x-1)/A*A+A;
}


// 不正解の解答

int main(){
    double _x, _y, _r;
    ll ans=0;
    cin >> _x >> _y >> _r;

    ll A=10000;
    ll x=A*_x;
    ll y=A*_y;
    ll r=A*_r;


    for(ll i=cei(x-r,A); i<=flo(x+r,A); i+=A){
        ll imax, imin, l;
        cout << "i: " << i << endl;
        l=sqrt(r*r-(x-i)*(x-i));
        cout << "y-l: " << y-l << endl;
        imax = flo(y+l, A);
        imin = cei(y-l, A);
        cout << "imax: " << imax << endl;
        cout << "imin: " << imin << endl;
        ans += (imax-imin)/A+1;
    }
    cout << ans << endl;
	return 0;
}
