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
	ll n;
	cin>>n;
	if(n%2==1) return 0;

	bool flag;
	string s;
	int tmp;

	for(ll bit=0; bit<1<<n; bit++){
		s="";
		flag=true;
		tmp=0;
		rep(i, n){
			if(bit & 1<<(n-1-i)){
				s += ")";
			}
			else{
				s += "(";
			}
		}
		rep(i, n){
			if(s[i]=='(') tmp++;
			else tmp--;
			if(tmp<0) flag=false;
		}
		if(tmp!=0) flag=false;
		if(flag) cout<<s<<endl;
	}
	
	return 0;
}