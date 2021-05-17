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

int n,m,q;
int ans=0, tmp;
vector<int> a;
vector<vector<int>> qq;

void solve(int l, int beg){
	if(l==n){
		// coutALL(a);
		tmp=0;
		rep(i, q){
			if(a[qq[i][1]-1]-a[qq[i][0]-1] == qq[i][2]) tmp += qq[i][3];
		}
		chmax(ans, tmp);
		return;
	}else{
		for(ll i=beg; i<m; i++){
			a[l]=i;
			solve(l+1, i);
		}
		return;
	}
	cout<<ans<<endl;
}


int main(){
	cin>>n>>m>>q;

	a.resize(n);
	a = vector<int>(n);
	qq.resize(q);
	rep(i, n) qq[i].resize(4);

	rep(i, q) rep(j, 4) cin>>qq[i][j];
	solve(0, 0);

	cout<<ans<<endl;
	return 0;
}