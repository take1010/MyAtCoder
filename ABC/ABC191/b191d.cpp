#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define MOD 1000000007
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }



int main(){
    double x, y, r;
    ll ans=0;
    cin >> x >> y >> r;
    r += 1E-14;

    for(double i=ceil(x-r); i<=floor(x+r); i++){
        double imax, imin, l;
        l=sqrt(r*r-(x-i)*(x-i));
        if(l<0) continue;
        imax = y+l;
        imin = y-l;
        imax = floor(imax);
        imin = ceil(imin);
        ans += imax-imin+1;
    }
    cout << ans << endl;
	return 0;
}
