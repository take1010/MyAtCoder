#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define rep(i, n) for(ll i = 0; i < (ll)(n); i++)
#define MOD 2019
#define coutALL(x) for(auto i=x.begin();i!=--x.end();i++) cout<<*i<<" ";cout<<*--x.end()<<endl;
#define coutVEC2(x) rep(j, x.size()) {auto y=x.at(j); coutALL(y);}
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

int main(){
	ll l,r;
	ll ans=2019*2019+1;
	cin>>l>>r;
	if(r-l>=2019)cout<<0<<endl;
	else{
		ll i, j;
		for(i=l; i<r; i++) for(j=i+1; j<=r; j++){
			// cout << "i: "<< i << endl;
			// cout << "j: "<< j << endl;
			chmin(ans, ((i%MOD)*(j%MOD))%MOD);
			// cout<<ans<<endl;
		}
		cout<<ans<<endl;
	}

	return 0;
}