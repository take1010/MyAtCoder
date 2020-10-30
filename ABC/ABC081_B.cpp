#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int main(){
    ll N, A, ans=1000, x;
    ll i;

	cin >> N;
    for(i=0; i<N; i++){
        cin >> A;
        x = 0;
        while (1){
            if(A%2 != 0)break;
            A /= 2;
            x++;
        }
        if(ans>x)ans = x;
    }


    cout << ans << endl;

}