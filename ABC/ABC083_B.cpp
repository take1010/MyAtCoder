#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ll N, A, B, ans=0, x, buf;
    ll i, j;

	cin >> N >> A >> B;

    for(i=1; i<=N; i++){
        buf = i;
        x = 0;
        for(j=0; j<5; j++){
            x += buf%10; buf /= 10;
        }
        if(A<=x && x<=B)ans += i;
    }
    cout << ans << endl;

}