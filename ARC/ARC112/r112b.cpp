#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define MOD 1000000007
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

int main(){
	ll b, c;
	cin >> b >> c;

	ll ans=0;
	if(b>0){
		ans = 1;
		ans += min(c, 2*b);
		ans += max(c-2, (ll) 0);
	}else if(b<0){
		b=-b;
		ans = 1;
		ans += c;
		ans += min(2*b-1, max(c-2, (ll) 0));
	}else{
		ans += c;
	}
	cout << ans << endl;
	return 0;
}
