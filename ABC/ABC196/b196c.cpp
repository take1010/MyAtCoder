#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define coutALL(x) for(auto i=x.begin();i!=--x.end();i++) cout<<*i<<" ";cout<<*--x.end()<<endl;
#define MOD 1000000007
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

int main(){
	ll n;
    cin>>n;
    int ans=0;
    int keta=1;
    ll tmp=10;

    for(ll i=1; i<1000000; i++){
        if(i==tmp) tmp*=10;
        if(n >= i*(tmp+1)) ans++;
        else break;
    }
    cout<<ans<<endl;
	return 0;
}
