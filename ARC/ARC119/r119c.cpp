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
	ll n, ans=0;
	cin>>n;

	vector<ll> a(n), asum(n+1);
	set<ll> seen;
	map<ll,ll> memo;

	rep(i, n){
		cin>>a[i];
		if(i%2) a[i]*=-1;
		asum[i+1]=asum[i]+a[i];
	}
	// coutALL(a);
	// cout<<"asum"<<endl;
	// coutALL(asum);

	rep(i, n+1){
		seen.insert(asum[i]);
		memo[asum[i]]++;
	}
	// cout<<"seen"<<endl;
	// coutALL(seen);

	
	for(ll x: seen){
		if(memo[x]>1) ans += memo[x]*(memo[x]-1)/2;
	}
	cout<<ans<<endl;
	return 0;
}