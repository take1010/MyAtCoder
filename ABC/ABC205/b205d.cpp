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
	ll n,q;
	cin>>n>>q;
	vector<ll> a(n), k(q);
	rep(i, n) {
		cin>>a[i];
		a[i] -= i;
	}
	rep(i, q) cin>>k[i];

	ll l,r,mid;
	rep(i, q){
		l = -1;
		r = n;
		while (r-l>1){
			// cout<<"l: "<<l<<"   r: "<<r<<endl;
			mid = l+(r-l)/2;
			if(k[i] < a[mid]){
				r=mid;
			}else{
				l=mid;
			}
		}
		cout<<k[i]+r<<endl;
	}
	
	return 0;
}