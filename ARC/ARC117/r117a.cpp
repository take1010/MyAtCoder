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
	ll a,b;
	cin>>a>>b;

	if(a==b){
		rep(i, a){
			cout<<i+1<<" "<<-i-1<<" ";
		}
		cout<<endl;
	}else if(a>b){
		rep(i, b-1){
			cout<<i+1<<" "<<-i-1<<" ";
		}
		int sum=0;
		for(int i=b; i<=a; i++){
			cout<<i<<" ";
			sum+=i;
		}
		cout<<-sum<<endl;
	}else{
		rep(i, a-1){
			cout<<i+1<<" "<<-i-1<<" ";
		}
		int sum=0;
		for(int i=a; i<=b; i++){
			cout<<-i<<" ";
			sum-=i;
		}
		cout<<-sum<<endl;
	}
	return 0;
}