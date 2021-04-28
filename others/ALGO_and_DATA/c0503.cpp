#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define coutALL(x) for(auto i=x.begin();i!=--x.end();i++) cout<<*i<<" ";cout<<*--x.end()<<endl;
#define MOD 1000000007
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

const ll INF = 1LL << 60;

int main(){
	int N;
    cin >> N;
    vector<ll> h(N);
    
    rep(i, N) cin >> h[i];

    vector<ll> dp(N, INF);
    dp[0]=0;

    for(int i=1; i<N; i++){
        chmin(dp[i], dp[i-1]+abs(h[i]-h[i-1]));
        if(i>1) chmin(dp[i], dp[i-2]+abs(h[i]-h[i-2]));
    }
    
    coutALL(dp);
    cout << dp[N-1] << endl;
	
	return 0;
}
