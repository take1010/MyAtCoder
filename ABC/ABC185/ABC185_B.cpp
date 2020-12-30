#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define MOD 1000000007
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

int main(){
    ll n, m, t, now=0;
    cin >> n >> m >> t;
    ll a, b;

    ll x = n;

    rep(i, m){
        cin >> a >> b;
        x -= (a-now);
        if(x<=0){
            cout << "No" << endl;
            return 0;
        }
        x += (b-a);
        if(n<x) x=n;
        now = b;
    }
    x -= (t-now);
    if(x<=0){
        cout << "No" << endl;
        return 0;
    }
    cout << "Yes" << endl;


	return 0;
}
