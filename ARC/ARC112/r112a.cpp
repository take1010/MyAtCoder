#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define MOD 1000000007
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

int main(){
	ll t;
	cin >> t;

	rep(i, t){
		ll l, r;
		cin >> l >> r;
		ll x=r-2*l+1;
		if(x>0) cout << x*(x+1)/2 << endl;
		else cout << 0 << endl;
	}

	
	return 0;
}
