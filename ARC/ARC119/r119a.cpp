#include <bits/stdc++.h>
// #include <atcoder/all>
using namespace std;
// using namespace atcoder;
typedef long long ll;
const ll MOD = 1000000007;

#define rep(i, n) for(ll i = 0; i < (ll)(n); i++)
#define coutALL(x) for(auto i=x.begin();i!=--x.end();i++) cout<<*i<<" ";cout<<*--x.end()<<endl;
#define coutVEC2(x) rep(j, x.size()) {auto y=x.at(j); coutALL(y);}
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

int main(){
	ll n;
	cin>>n;

	ll ans=1e18+1;
	ll a,b=0,bb=1,c;
	while(1){
		a=n/bb;
		if(a==0) break;
		c=n-a*bb;
		if(c>=0) chmin(ans, a+b+c);
		b++;
		bb*=2;
	}
	cout<<ans<<endl;
	return 0;
}