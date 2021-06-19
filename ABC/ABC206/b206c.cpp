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
	vector<ll> a(n);
	rep(i, n) cin>>a[i];
	sort(a.begin(), a.end());

	ll ans=n*(n-1)/2; 
	ll tmp=0, memo=0;
	rep(i, n){
		if(a[i]==memo) tmp++;
		else{
			ans -= tmp*(tmp+1)/2;
			memo=a[i];
			tmp=0;
		}
		if(i==n-1){
			ans -= tmp*(tmp+1)/2;
		}
	}
	cout<<ans<<endl;

	return 0;
}