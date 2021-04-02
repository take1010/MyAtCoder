#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define rep(i, n) for(ll i = 0; i < (ll)(n); i++)
#define MOD 1000000007
#define coutALL(x) for(auto i=x.begin();i!=--x.end();i++) cout<<*i<<" ";cout<<*--x.end()<<endl;
#define coutVEC2(x) rep(j, x.size()) {auto y=x.at(j); coutALL(y);}
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

int main(){
	ll n;
	cin>>n;
	vector<ll> a(n), b(n+1), ans(n);
	rep(i, n) cin>>a[i];
	rep(i, n) a[i]*=2;

	rep(i, n) b[i+1]=a[i]-b[i];
	ans[0]=b[n]/2;
	rep(i, n-1) ans[i+1]=a[i]-ans[i];
	coutALL(ans);
	return 0;
}