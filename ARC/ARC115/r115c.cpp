#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define MOD 1000000007
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

int main(){
	ll n;
    cin>>n;
    vector<ll> ans(n);

    rep(x, n){
        if(x==0){
            ans[x]=1;
            continue;
        }
        // x+1の素因数の数     

        for(int i=2; i*i<=x+1; i++){
            if((x+1)%i==0){
                ans[x] = ans[(x+1)/i-1] + 1;
                break;
            }
        }
        if(ans[x]==0) ans[x] = 2;
    }

    rep(i, n){
        if(i) cout << " ";
        cout << ans[i];
    }
    cout << endl;

	return 0;
}
