#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define MOD 1000000007
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

int main(){
	ll a, b, c;
    cin >> a >> b >> c;

    a %= 10;
    b %= 4;

    ll x;
    if(b==0) x=4;
    else if(b==1) x=1;
    else if(b==2){
        if(c>1) x=4;
        else x=2;
    }else{
        if(c%2==0) x=1;
        else x=3;
    }

    ll ans=powl(a, x);
    cout << ans%10 << endl;

	
	return 0;
}
