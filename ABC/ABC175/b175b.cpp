#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define MOD 1000000007
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

int main(){
	int n, ans=0;
    cin >> n;

    vector<ll> l(n);
    rep(i, n) cin >> l[i]; 
    sort(l.begin(), l.end()); 

    rep(k, n) rep(j, k) rep(i, j){
        if(l[i]+l[j]>l[k] && l[i]!=l[j] && l[j]!=l[k]) ans++;
    }

    cout << ans << endl;
	return 0;
}
