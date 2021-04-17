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
	int n,m;
	cin>>n>>m;
	set<int> a, b, ans;
	rep(i, n) {
		int x;
		cin >> x;
		a.insert(x);
	}
	rep(i, m) {
		int x;
		cin >> x;
		b.insert(x);
	}

	rep(i, 1000){
		if(a.count(i+1)+b.count(i+1)==1) cout<<i+1<<" ";
	}
	cout << endl;



	return 0;
}