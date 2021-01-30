#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define MOD 1000000007
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

int main(){
	ll n;
    cin >> n;
    n *= 2;
    set<ll> memo;

    for(ll i=1; i*i<=n; i++){
        if(n%i==0){
            if(i%2 != 0 || (n/i)%2 != 0){
                memo.insert(i);
                memo.insert(n/i);
            }
        }
    }
    cout << memo.size() << endl;
	return 0;
}
