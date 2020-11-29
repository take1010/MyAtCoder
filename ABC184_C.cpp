#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	ll r1, r2, c1, c2;
    cin >> r1 >> c1 >> r2 >> c2;
    int ans;

    ll rdis = abs(r1-r2);
    ll cdis = abs(c1-c2);
    ll dis = rdis+cdis;

    if(dis == 0) ans=0;
    else if(dis <= 3) ans=1;
    else if(rdis == cdis) ans=1;
    else if(dis <= 6) ans=2;
    else if(dis%2 == 0) ans=2;
    else if(abs(rdis-cdis)<=3) ans=2;
    else ans=3;

    cout << ans <<endl;
    
}
