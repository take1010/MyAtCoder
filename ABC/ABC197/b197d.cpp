#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define MOD 1000000007
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

int main(){
	cout << fixed << setprecision(10);
	int n;
	cin>>n;

	double x1, x2, y1, y2;
	double ax, ay, bx, by, cx, cy, theta;

	cin>>x1>>y1>>x2>>y2;
	ax=(x1+x2)/2;
	ay=(y1+y2)/2;
	bx=(x2-x1)/2;
	by=(y2-y1)/2;
	theta=2*M_PI/n;

	cx=bx*cos(theta)-by*sin(theta);
	cy=bx*sin(theta)+by*cos(theta);

	cout << ax-cx << " " << ay-cy << endl;

	return 0;
}
