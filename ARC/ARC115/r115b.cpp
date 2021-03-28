#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define MOD 1000000007
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

int main(){
	int n;
    cin>>n;

    vector<ll> a(n), b(n);
    vector<vector<ll>> c(n, vector<ll>(n));
    rep(i, n) rep(j, n) cin >> c.at(i).at(j);

    ll tmp=1E+10;
    rep(j, n) chmin(tmp, c.at(0).at(j));
    rep(j, n) b.at(j) = c.at(0).at(j)-tmp;
    rep(i, n) rep(j, n) c.at(i).at(j) -= b.at(j);

    // rep(i, n){
    //     rep(j, n){
    //         cout << " " << c.at(i).at(j);
    //     }
    //     cout << endl;
    // }

    rep(i, n) a.at(i) = c.at(i).at(0);
    rep(i, n) rep(j, n) c.at(i).at(j) -= a.at(i);

    int flag=1; 
    rep(i, n) rep(j, n) if(c.at(i).at(j)) flag=0;

    if(flag){
        cout << "Yes" << endl;
        rep(i, n){
            if(i) cout << " ";
            cout << a.at(i);
        }
        cout << endl;
        rep(i, n){
            if(i) cout << " ";
            cout << b.at(i);
        }
        cout << endl;
    }else{
        cout << "No" << endl;
    }



	
	return 0;
}
