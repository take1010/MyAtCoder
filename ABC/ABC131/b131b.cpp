#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define MOD 1000000007
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

int main(){
	int n, l;
	cin>>n>>l;

	int ans=0;
	int tmp=l;
	int minap=1000;

	rep(i, n){
		if(abs(tmp)<abs(minap)) minap=tmp;
		// cout << "minap: " << minap << endl;
		ans += tmp;
		tmp++;
	}


	cout << ans-minap << endl;
	return 0;
}
