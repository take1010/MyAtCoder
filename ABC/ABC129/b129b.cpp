#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define MOD 1000000007
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

int main(){
	int n;
    cin >> n;
    vector<int> w(n);
    ll s1=0;
    ll s2=0;
    ll ans = 10001;

    rep(i, n){
        cin >> w[i];
        s2 += w[i];
    }

    rep(i, n-1){
        s1 += w[i];
        s2 -= w[i];
        chmin(ans, abs(s1-s2));
    }

    cout << ans << endl;
    return 0;
}
