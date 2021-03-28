#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define MOD 998244353
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

int main(){
	ll n;
	cin>>n;
	vector<ll> a(n);
	rep(i, n) cin>>a[i];
	sort(a.begin(), a.end());

	ll ans=0, tmp=0;
	rep(i, n){
		ans += (((tmp+a[i])%MOD)*a[i])%MOD;
		ans %= MOD;
		// cout<<"ans"<<ans<<endl;

		tmp *= 2;
		tmp %= MOD;
		tmp += a[i];
		tmp %= MOD;
	}
	cout<<ans<<endl;
	return 0;
}
