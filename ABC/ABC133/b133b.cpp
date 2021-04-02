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
	int n, d;
	cin>>n>>d;
	vector<vector<int>> a(n, vector<int>(d));
	rep(i, n) rep(j, d) cin>>a[i][j];

	int ans=0;
	rep(i, n) rep(j, i){
		int tmp=0;
		rep(k, d) tmp += (a[i][k]-a[j][k])*(a[i][k]-a[j][k]);
		for(int l=0; l*l<=tmp; l++){
			if(l*l==tmp) ans++;
		}
	}
	cout<<ans<<endl;
	return 0;
}