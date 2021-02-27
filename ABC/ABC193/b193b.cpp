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
    int MAX=2E+9;
    int ans=MAX;

    rep(i, n){
        int a, p, x;
        cin >> a >> p >> x;
        if(a<x){
            chmin(ans, p);
        }
    }
	if(ans!=MAX)cout << ans << endl;
    else cout << -1 << endl;

	
	return 0;
}
