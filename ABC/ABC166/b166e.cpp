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

// TLEでした
int main(){
	int n, ans=0;
	cin>>n;
	vector<int> a(n);
	multiset<int> memo;
	rep(i, n) cin>>a[i];

	rep(i, n){
		if(i-a[i]>=0) ans += memo.count(i-a[i]);
		memo.insert(a[i]+i);
	}
	for(auto itr = memo.begin(); itr != memo.end(); ++itr) {
        cout << *itr << " "; 
    }
	cout<<ans<<endl;
	return 0;
}