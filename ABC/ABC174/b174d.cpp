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
    string c;
    cin >> c;

    vector<int> r, w;
    int ans=0;

    rep(i, n){
        if(c[i]=='R')r.push_back(i);
        else w.push_back(i);
    }

    reverse(r.begin(), r.end());
    int maxans=min(r.size(), w.size()); 

    rep(i, maxans){
        // cout << "r w[" << i << "]: " << r[i] << " " << w[i] << endl;
        if(r[i]>w[i]) ans++;
        else{
            cout << ans <<endl;
            return 0;
        }
    }
    cout << maxans << endl;
	return 0;
}
