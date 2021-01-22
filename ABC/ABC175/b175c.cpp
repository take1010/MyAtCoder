#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define MOD 1000000007
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

int main(){
	ll x, k, d;
    cin >> x >> k >> d;

    x=abs(x);

    if(x/k >= d)cout << x-k*d << endl;
    else{
        ll r0=(x-(k%2)*d)%(2*d); 
        ll l0=r0-2*d; 

        cout << min(abs(l0), abs(r0)) << endl;
    }


	return 0;
}

