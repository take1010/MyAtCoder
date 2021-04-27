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
	int n;
	cin>>n;
	
	vector<tuple<int,int,int>> lst;
	rep(i, n){
		int m;
		cin>>m;
		rep(j, m){
			int x,y;
			cin>>x>>y;
			x--;
			lst.push_back(make_tuple(i,x,y));
		}

	}

	int ans=0, flag;
	rep(bit, 1<<n){
		flag=1;
		set<int> ho_lst;
		rep(i, n) if(bit & 1<<i) ho_lst.insert(i);
		rep(i, lst.size()){
			if(ho_lst.count(get<0>(lst[i]))==1){
				if(ho_lst.count(get<1>(lst[i])) != get<2>(lst[i])) {
					flag=0;
					break;
				}
			}
		}
		if(flag==1) chmax(ans, (int)ho_lst.size());
	}
	cout<<ans<<endl;
	return 0;
}