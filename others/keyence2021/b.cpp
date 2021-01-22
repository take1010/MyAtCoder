#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define MOD 1000000007
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

int main(){
    int n, k, a, ans=0;
    cin >> n >> k;

    int maxk=k; 
    int lis[300001];
    rep(i, n) lis[i]=0;

    rep(i, n){
        cin >> a; 
        lis[a]++;
    }

    rep(i, n){
        chmin(maxk, lis[i]);
        ans += maxk;
    }
    cout << ans << endl;
	return 0;
}

