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
	vector<ll> a(n);
	rep(i, n) cin>>a[i];

	ll ans=0;
	vector<ll> num(401);
	rep(i, n) num[a[i]+200]++;
	rep(i, 401) rep(j, i){
		ans += num[i]*num[j]*(i-j)*(i-j);
	}
	cout<<ans<<endl;
	return 0;
}