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
	vector<ll> a(n);
    set<ll> xs;
    ll ans=0;

    rep(i, n){
        cin >> a[i];
        xs.insert(a[i]);
    }

    int buf, maxbuf;
    for(auto x: xs){
        buf=0; maxbuf=0;
        rep(i, n){
            if(a[i]>=x){
                buf++;
            }else{
                chmax(maxbuf, buf);
                buf=0;
            }
        }
        chmax(maxbuf, buf);
        chmax(ans, x*maxbuf);
    }


    cout << ans << endl;


	return 0;
}
