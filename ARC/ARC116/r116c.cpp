#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define MOD 998244353
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }


const int MAX = 510000;
long long fac[MAX], finv[MAX], inv[MAX];
void COMinit() {
    fac[0] = fac[1] = 1;
    finv[0] = finv[1] = 1;
    inv[1] = 1;
    for (int i = 2; i < MAX; i++){
        fac[i] = fac[i - 1] * i % MOD;
        inv[i] = MOD - inv[MOD%i] * (MOD / i) % MOD;
        finv[i] = finv[i - 1] * inv[i] % MOD;
    }
}

long long COM(int n, int k){
    if (n < k) return 0;
    if (n < 0 || k < 0) return 0;
    return fac[n] * (finv[k] * finv[n - k] % MOD) % MOD;
}

int main(){
	ll m,n,ans=0;
	cin>>n>>m;

	COMinit();

	for(ll i=1; i<=m; i++){
		ll tmp=1;
		ll x=i;
		for(ll j=2; j*j<=i; j++){
			if(i%j!=0) continue;
			ll ex=0;
			while(x%j==0){
				ex++;
				x/=j;
			}
			tmp *= COM(n-1+ex, ex);
			tmp %= MOD;
		}
		if(x!=1){
			tmp *= COM(n, 1);
			tmp %= MOD;
		}
		ans += tmp;
		ans %= MOD;
	}

	cout << ans << endl;
	return 0;
}
