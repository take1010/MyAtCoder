#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define MOD 1000000007
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

int main(){
	int n, m;
    cin >> n >> m;

    vector<ll> dp(n);
    dp.assign(n, -1);

    rep(i, m){
        int x;
        cin >> x;
        dp[x-1]=0;
    }

    rep(i, n){
        if(dp[i]!=0){
            if(i==0){
                dp[i]=1;
            }else if(i==1){
                dp[i]=1+dp[0];
            }else{
                dp[i]=(dp[i-1]+dp[i-2])%MOD;
            }
        }
    }
    cout << dp[n-1] << endl;
	
	return 0;
}
