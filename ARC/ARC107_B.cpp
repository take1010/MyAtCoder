#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define MOD 1000000007

int main(){
	ll N, K, i, j, ans=0;

    cin >> N >> K;

    for (i = K+2; i <= 2*N; i++){
        if(i<2)continue;
        j = i-K; 
        if(j>2*N)break;
        //cout << "i: "<< i << endl;
        //cout << "j: "<< j << endl;
        ans += (min(i-1, 2*N+1-i)*min(j-1, 2*N+1-j));
    }

    cout << ans << endl;
}
