#include <bits/stdc++.h>
using namespace std;
typedef long long ll;





int main(){
    ll ans=0; 
    ll X, Y, A, B, i, j, x;

	cin >> X >> Y >> A >> B;

    x = X;
    for(i=0; x<Y; i++){
        j = (Y-x-1)/B;
        if(ans < i+j) ans = i+j;
        x *= A;
    }
    cout << ans << endl;
}


