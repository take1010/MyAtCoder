#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define MOD 1000000007
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

int main(){
	ll a,b,c,d;
	cin>>a>>b>>c>>d;

	ll aa,bb;
	aa= -(a-1)/lcm(c,d)+(a-1)/c+(a-1)/d;
	bb= -b/lcm(c,d)+b/c+b/d;

	// cout << bb << " " << aa;
	cout<< (b-a+1)-(bb-aa) <<endl;
	return 0;
}
