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

int main(){
	string s;
	cin>>s;
	vector<int> lst(10);
	int ans=0, flag;

	rep(i, 10000){
		int tmp=i;
		flag=1;
		lst.assign(10, 0);
		while(tmp){
			lst[tmp%10]++;
			tmp /= 10;
		}
		
		rep(j, 10) lst[0] -= lst[j];
		lst[0] += 4;

		rep(j, 10){
			if(s[j]=='o') if(lst[j]==0) flag=0;
			if(s[j]=='x') if(lst[j]!=0) flag=0; 
		}
		if(flag){
			// cout<<i<<endl;
			// coutALL(lst);
			ans++;
		} 
	}
	cout<<ans<<endl;
	return 0;
}