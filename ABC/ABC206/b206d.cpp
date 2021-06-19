#include <bits/stdc++.h>
#include <atcoder/dsu>
using namespace std;
using namespace atcoder;
typedef long long ll;
const ll MOD = 1000000007;

#define rep(i, n) for(ll i = 0; i < (ll)(n); i++)
#define coutALL(x) for(auto i=x.begin();i!=--x.end();i++) cout<<*i<<" ";cout<<*--x.end()<<endl;
#define coutVEC2(x) rep(j, x.size()) {auto y=x.at(j); coutALL(y);}
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

int main(){
	ll n, ans=0;
	cin>>n;
	vector<ll> a(n);
	rep(i, n) cin>>a[i];
	
	dsu d(200001);
	rep(i, n/2) d.merge(a[i], a[n-1-i]);
	
	
	for(auto x: d.groups()){
		// cout<<x.size()<<endl;
		ans += x.size()-1;
	}
	cout<<ans<<endl;
	return 0;
}