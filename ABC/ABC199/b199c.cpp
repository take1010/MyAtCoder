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
	ll n,q;
	string s;
	cin>>n>>s>>q;
	vector<string> ss(2);
	ss[0]=s.substr(0, n);
	ss[1]=s.substr(n);
	int pre=0;
	int apre,bpre;
	ll t,a,b;
	rep(i, q){
		cin>>t>>a>>b;
		a--;
		b--;
		if(t==1){
			if(a<n) apre=0;
			else{
				apre=1; 
				a-=n;
			}
			if(b<n) bpre=0;
			else {
				bpre=1; 
				b-=n;
			}
			swap(ss[apre^pre][a], ss[bpre^pre][b]);
		}else{
			pre = 1-pre;
		}
	}
	cout<<ss[pre]+ss[1-pre]<<endl;
	return 0;
}