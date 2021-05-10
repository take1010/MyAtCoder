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
	vector<ll> a(n);
	rep(i,n) cin>>a[i];

	vector<ll> memo(200);
	rep(i, n){
		memo[a[i]%200]++;
	}
	// coutALL(memo);

	rep(i, 200){
		if(memo[i]!=0){
			ans += memo[i]*(memo[i]-1)/2;
		}
	}
	cout<<ans<<endl;
	return 0;
}