#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define MOD 1000000007
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

int main(){
	int t;
	cin>>t;
	rep(i, t){
		ll x;
		cin>>x;
		int two=0;
		while(x%2==0){
			x /= 2;
			two++;
		}
		if(two==0) cout<<"Odd"<<endl;
		else if(two==1) cout<<"Same"<<endl;
		else cout<<"Even"<<endl;
	}
	return 0;
}
