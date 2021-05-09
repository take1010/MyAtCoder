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
	int n,c;
	cin>>n;
	vector<int> p1(n),p2(n);
	vector<int> p1_sum(n+1),p2_sum(n+1);
	rep(i,n){
		cin>>c;
		if(c==1) cin>>p1[i];
		else cin>>p2[i];
	}
	rep(i,n){
		p1_sum[i+1]=p1_sum[i]+p1[i];
		p2_sum[i+1]=p2_sum[i]+p2[i];
	}

	int q;
	cin>>q;
	vector<int> l(q),r(q);
	rep(i,q) cin>>l[i]>>r[i];

	rep(i,q){
		cout<<p1_sum[r[i]]-p1_sum[l[i]-1]<<" "<<p2_sum[r[i]]-p2_sum[l[i]-1]<<endl;
	}

	return 0;
}