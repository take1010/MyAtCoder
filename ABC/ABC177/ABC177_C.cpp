#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define MOD 1000000007



int main(){
    ll N, sum=0, buf, x=0;
    ll i;

	cin >> N;
    for(i=0; i<N; i++){
        cin >> buf;
        sum += ((buf*x) % MOD);
        sum %= MOD;
        x += buf;
        x %= MOD;
    }
    cout << sum << endl;
}