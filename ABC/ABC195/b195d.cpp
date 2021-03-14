#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define MOD 1000000007
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

int main(){
	int n, m, q;
    cin >> n >> m >> q;
    // vector<int> w(n), v(n), x(m); 
    
    vector<pair<int, int>> vw(n);
    vector<int> x(m); 
    rep(i, n) cin >> vw[i].second >> vw[i].first;
    rep(i, n) vw[i].second *= -1;
    sort(vw.begin(), vw.end(), greater<pair<int, int>>());
    rep(i, n) vw[i].second *= -1;


    // rep(i, n) cout << vw[i].second << "   " << vw[i].first << endl;
    rep(i, m) cin >> x[i];


	rep(i, q){
        int l, r;
        cin >> l >> r;
        l--;
        r--;

        vector<int> box;
        rep(j, m){
            if(j<l || r<j) box.push_back(x[j]);
        }

        if(box.size()==0){
            cout << 0 << endl;
            continue;
        }
        sort(box.begin(), box.end());
        vector<int> value(box.size());

        rep(j, n){
            rep(k, box.size()){
                if(vw[j].second <= box[k] && value[k]==0){
                    value[k] = vw[j].first;
                    break;
                }
            }
        }

        int ans=0;
        rep(j, value.size()) ans += value[j];
        cout << ans << endl;

    }
	return 0;
}
