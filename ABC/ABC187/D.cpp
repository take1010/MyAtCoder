#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define MOD 1000000007
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

int main(){
    int n;
    ll a, b, x, sum=0, asum=0;
    vector<ll> nu;

    cin >> n;
    
    rep(i, n){
        cin >> a >> b;
        asum += a;
        x = 2*a+b;
        nu.push_back(x); 
    }
    sort(nu.begin(), nu.end(), greater<ll>()); 
    
    rep(i, n){
        sum += nu[i];
        if(asum<sum){
            cout << i+1 << endl;
            return 0;
        }
    }

	return 0;
}

