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
	ll t,n,ans=0;
	cin>>t>>n;

	ll a=(n-1)/t;
	n -= a*t;
	ans += (100+t)*a;

	ll tmp=0, count=0, pri=0;
	while(1){
		tmp += 100+t;
		pri++;
		if(pri != tmp/100){
			count++;
			if(count==n) break;
			else pri++;
		}
	}
	cout<<ans+pri<<endl;
	return 0;
}