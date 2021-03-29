#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define MOD 1000000007
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

int main(){
	int n;
	cin>>n;
	vector<ll> a(n);
	ll ans=powl(2,30)+10;
	ll tmp, memo;
	rep(i, n) cin>>a[i];

	for(ll bit=0; bit< 1<<(n-1); bit++){
		tmp=a[0];
		memo=0;
		for(ll i=0; i<n-1; i++){
			if(bit & 1<<i){
				// cout<<"XOR"<<endl;
				// cout<<"tmp: "<<tmp<<endl;
				memo = memo^tmp;
				tmp = a[i+1];
				// cout<<"memo: "<<memo<<endl;
			}else{
				// cout<<"OR"<<endl;
				tmp = tmp|a[i+1];
				// cout<<"tmp: "<<tmp<<endl;
			}
		}
		memo = memo^tmp;
		// cout<<"last memo: "<<memo<<endl;
		chmin(ans, memo);
	}
	cout<<ans<<endl;
	return 0;
}
