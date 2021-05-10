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
	ll k,n,m,bsum=0;
	cin>>k>>n>>m;
	vector<ll> a(k), b(k);
	vector<pair<ll,ll>> rest;
	rep(i, k) cin>>a[i];

	rep(i, k) {
		a[i] *= m;
		b[i] = a[i]/n;
		bsum += b[i];
		rest.push_back({a[i]-b[i]*n, i});
	}
	// coutALL(b);
	sort(rest.begin(), rest.end(), greater<pair<ll,ll>>());
	// rep(i, k) cout<<rest[i].first<<" "<<rest[i].second<<endl;
	rep(i, m-bsum) b[rest[i].second]++;
	coutALL(b);

	return 0;
}