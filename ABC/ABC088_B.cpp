#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define MOD 1000000007

int main(){
    ll N, x=1, a[100], ans=0;
    ll i;

	cin >> N;

    for(i=0; i<N; i++){
        cin >> a[i];
    }
    sort(a, a+N); reverse(a, a+N);

    for(i=0; i<N; i++){
        ans += (x * a[i]);
        x *= -1;
    }
    cout << ans << endl;
}