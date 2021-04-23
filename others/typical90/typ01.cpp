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
	ll n,l,k;
	cin>>n>>l>>k;
	vector<ll> a(n);
	rep(i, n) cin>>a[i];

	ll left=1;
	ll right=l+1;
	ll mid,num,cut;

	while(right-left>1){
		mid=left+(right-left)/2;
		num=0;
		cut=0;
		rep(i, n){
			if(a[i]-cut>=mid){
				num++;
				cut=a[i];
			}
		}
		if(l-cut>=mid) num++;
		
		if(num>=k+1) left=mid;
		else right=mid;
	}
	cout<<left<<endl;

	return 0;
}