#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define MOD 1000000007
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

int main(){
	int n, m, k;
    cin >> n >> m;
    vector<int> a(m), b(m);
    rep(i, m) cin >> a[i] >> b[i];
    cin >> k;
    vector<int> c(k), d(k);
    rep(i, k) cin >> c[i] >> d[i];

    ll ans=0;
    for(ll bit=0; bit<(1<<k); bit++){
        // cout << "bit: " << bit << endl;
        vector<int> box(n+1);
        box.assign(n+1, 0);
        for(int i=0; i<k; i++){
            if(bit & (1<<i)) box[c[i]]++;
            else box[d[i]]++;
        }

        rep(i, n+1){
            // cout << "box" << i << ": " << box[i] << endl;
        }

        ll flag=0;
        rep(i, m){
            if(box[a[i]] && box[b[i]])flag++;
        }
        // cout << "flag: " << flag << endl << endl;
        chmax(ans, flag);
    }
    cout << ans << endl;
	return 0;
}
