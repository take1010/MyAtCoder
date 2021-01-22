#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define MOD 1000000007
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

int main(){
        ll x, n, sum=0;
        
        cin >> n;
        vector<ll> a(n), b(n); 

        rep(i, n) cin >> a[i];
        rep(i, n) cin >> b[i]; 

        rep(i, n) sum += a[i]*b[i];

        if(sum) cout << "No" << endl;
        else cout << "Yes" << endl;

	return 0;
}
