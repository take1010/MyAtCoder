#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define MOD 998244353

ll fact(ll N);

int main(){
    ll A, B, C, ans;
	cin >> A >> B >> C;

    ans = (((fact(A) * fact(B)) % MOD) * fact(C)) % MOD; 
    //cout << "factA: "<< fact(A) << endl;
    //cout << "factB: "<< fact(B) << endl;
    //cout << "factC: "<< fact(C) << endl;

    cout << ans << endl;
}

ll fact(ll N){
    ll res=0, i;

    res = ((1+N)*N) % MOD;

    if(res%2 == 0){
        return res/2;
    }else{
        return (res+MOD)/2;
    }

    
}