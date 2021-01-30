#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define MOD 1000000007
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

int main(){
	ll MAX=100001;
    vector<ll> memo(MAX);

    ll n, q, a, b, c, sum=0;
    cin >> n;
    rep(i, n){
        cin >> a;
        memo[a]++;
        sum += a;
    }

    cin >> q;
    rep(i, q){
        cin >> b >> c;
        sum += (c-b)*memo[b];
        memo[c] += memo[b];
        memo[b] = 0;
        cout << sum << endl;
    }    
	return 0;
}
