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
	if(n==3){
		cout<<"6 10 15"<<endl;
		return 0;
	}

	set<int> s;

	for(int i=1; 6*i<=10000; i++) s.insert(6*i);
	for(int i=1; 10*i<=10000; i++) s.insert(10*i);
	for(int i=1; 15*i<=10000; i++) s.insert(15*i);

	auto ite = s.begin();
	rep(i, n){
		cout<<*ite<<" ";
		ite++;
	}
	cout<<endl;
	
	return 0;
}