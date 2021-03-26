#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define MOD 1000000007
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

int main(){
	cout << fixed << setprecision(12);

	double a,b,h,m;
	cin>>a>>b>>h>>m;
	
	double theta=(h/12+m/720-m/60)*2*M_PI;
	cout << sqrt(a*a+b*b-2*b*a*cos(theta)) << endl;

	return 0;
}
