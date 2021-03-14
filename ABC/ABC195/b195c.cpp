#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define MOD 1000000007
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

int main(){
	ll n, ans = 0;
    cin >> n;
    ll tmp=1000;

    
    while(n>=tmp){
        ans += n-tmp+1;
        tmp *= 1000;
    }

    cout << ans << endl;
	
	return 0;
}
