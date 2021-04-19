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
	ll n,k;
	cin>>n>>k;
	vector<ll> a(n+1);
	rep(i, n)cin>>a[i+1];

	vector<ll> time(n+1);
	time.assign(n+1, -1);
	time[1]=0;
	ll now_p=1;
	ll now_k=0;
	int loop=0;

	while(1){
		if(now_k==k) break;
		now_k++;
		now_p = a[now_p];
		// cout<<"k, p: "<<now_k<<" "<<now_p<<endl;
		if(loop==0 && time[now_p]!=-1){
			loop=1;
			now_k += (k-now_k)/(now_k-time[now_p])*(now_k-time[now_p]);
			// cout<<"k, p: "<<now_k<<" "<<now_p<<endl;
		}
		time[now_p]=now_k;
	}
	cout<<now_p<<endl;
	return 0;
}