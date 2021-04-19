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
		string s,t;
	cin>>s>>t;
	// if(s.size()+1==t.size() && s==t.substr(0,s.size())) cout<<"Yes"<<endl;
	// else cout<<"No"<<endl;
	cout << (s.size()+1==t.size() && s==t.substr(0,s.size())?"Yes":"No") << endl;


	return 0;
}