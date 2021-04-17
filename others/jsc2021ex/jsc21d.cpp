#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define rep(i, n) for(ll i = 0; i < (ll)(n); i++)
#define MOD 1000000007
#define coutALL(x) for(auto i=x.begin();i!=--x.end();i++) cout<<*i<<" ";cout<<*--x.end()<<endl;
#define coutVEC2(x) rep(j, x.size()) {auto y=x.at(j); coutALL(y);}
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

ll power(ll a, ll b){
	if(b==0) return 1;
	else if(b%2==0){
		ll t=power(a, b/2);
		return (t*t)%MOD;
	}else{
		ll t=power(a, b/2);
		return (((t*t)%MOD)*a)%MOD;
	}
}

int main(){
	ll n,p,ans;
	cin>>n>>p;

	ans = power(p-2, n-1);
	ans = (ans * (p-1))%MOD;
	cout<<ans<<endl;

	return 0;
}