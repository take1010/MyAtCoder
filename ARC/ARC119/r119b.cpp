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
	int n,ans=0;
	cin>>n;
	string s,t;
	cin>>s>>t;
	vector<int> ss,tt;

	rep(i, n){
		if(s[i]=='0') ss.push_back(i);
		if(t[i]=='0') tt.push_back(i);
	}
	// coutALL(ss);
	// coutALL(tt);
	if(ss.size()!=tt.size()){
		cout<<-1<<endl;
		return 0;
	}

	int m=ss.size();
	ans=m;
	rep(i, m){
		if(ss[i]==tt[i]) ans--;
	}
	cout<<ans<<endl;
	return 0;
}