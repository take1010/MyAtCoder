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
	string s, s0, s1, ans;
	cin>>s;
	int che=0;

	rep(i, s.size()){
		if(s[i]=='R') che=1-che;
		else{
			if(che==0) s0 += s[i];
			else s1 += s[i];
		}
	}
	reverse(s1.begin(), s1.end());
	string s2 = s1 + s0;
	if(che) reverse(s2.begin(), s2.end());
	// cout<<s2<<endl;	
	
	rep(i, s2.size()){
		// cout<<ans<<endl;
		if(ans.size()==0){
			ans.push_back(s2[i]);
		}else{
			if(ans[ans.size()-1]==s2[i]){
				ans.pop_back();
				continue;
			}
			ans.push_back(s2[i]);
		}
		
	}
	cout<<ans<<endl;
	return 0;
}