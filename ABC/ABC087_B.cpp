#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	ll A, B, C, X, xx, xxx;
    ll i, j;

    ll ans=0;

    cin >> A >> B >> C >> X;
    for(i=0; i<=min(A,X/500); i++){
        xx = X -500*i;
        for(j=0; j<=min(B, xx/100); j++){
            xxx = xx - 100*j;
            if(C*50 >= xxx)ans++;
        }
    }

    cout << ans << endl;
}