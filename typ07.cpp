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
	int n,q;
	cin>>n;
	vector<int> a(n);
	rep(i, n) cin>>a[i];
	sort(a.begin(), a.end());

	cin>>q;
	vector<int> b(q);
	rep(i, q) cin>>b[i];

	rep(i, q){
		auto it = lower_bound(a.begin(), a.end(), b[i]);
		int index = it - a.begin();

		int tmp = 1000000001;
		if(index<n) chmin(tmp, abs(b[i]-a[index])); 
		if(index>0) chmin(tmp, abs(b[i]-a[index-1]));
		cout<<tmp<<endl;
	}


	return 0;
}