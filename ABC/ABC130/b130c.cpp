#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define coutALL(x) for(auto i=x.begin();i!=--x.end();i++) cout<<*i<<" ";cout<<*--x.end()<<endl;
#define MOD 1000000007
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

int main(){
	ll w, h, x, y;
    cin >> w >> h >> x >> y;

    cout << fixed << setprecision(12);
    double dw, dh, sq;
    dw=(double) w;
    dh=(double) h;
    sq=dw/2*dh;

    int ans=0;
    if(2*x==w && 2*y==h) ans=1;

    cout << sq << " " << ans << endl;


	return 0;
}
