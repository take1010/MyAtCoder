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
	string s;
	cin>>s;

	int flag;
	rep(i, 10){
		flag=1;
		rep(j, s.size()){
			if(s[j]!=s[s.size()-1-j]) flag=0;
		}
		if(flag==1){
			cout<<"Yes"<<endl;
			return 0;
		}
		s = "0" + s;
	}
	cout<<"No"<<endl;
	return 0;
}