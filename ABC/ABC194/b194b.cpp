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
	int n;
	cin>>n;
	int ans=300000;
	vector<int> a(n), b(n);
	rep(i, n) cin>>a[i]>>b[i];

	rep(i, n) rep(j, n){
		if(i==j) chmin(ans, a[i]+b[i]);
		else chmin(ans, max(a[i],b[j]));
	}
	cout<<ans<<endl;
	return 0;
}