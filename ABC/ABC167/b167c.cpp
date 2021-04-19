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
	int n,m,x;
	cin>>n>>m>>x;
	vector<int> c(n);
	vector<vector<int>> a(n, vector<int>(m));

	int min_money=1e7;
	rep(i, n){
		cin>>c[i];
		rep(j, m)cin>>a[i][j];
	}

	vector<int> tmp_a(m);
	int tmp_c, flag;
	for(ll bit=0; bit<(1<<n); bit++){
		tmp_a.assign(m, 0);
		tmp_c=0;
		rep(i, n){
			if(bit & (1<<i)){
				tmp_c += c[i];
				rep(j, m) tmp_a[j]+=a[i][j];
			}
		}
		// coutALL(tmp_a);
		int min_algo=1e7;
		rep(j, m) chmin(min_algo, tmp_a[j]);
		if(min_algo>=x)chmin(min_money, tmp_c);
		
	}
	
	if(min_money==1e7) cout<<-1<<endl;
	else cout<<min_money<<endl;
	return 0;
}