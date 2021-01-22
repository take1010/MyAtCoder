#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define MOD 1000000007
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

int main(){
    ll n, ans=0;

	ll maxa=0, x, y; 
	vector<ll> a, b;
	rep(i, n){
		cin >> x;
		a.push_back(x);
	}
	rep(i, n){
		cin >> x;
		b.push_back(x);
	}

	rep(i, n){
		chmax(maxa, a[i]);
		chmax(ans, maxa*b[i]);
		cout << ans << endl;
	}
	return 0;
}
