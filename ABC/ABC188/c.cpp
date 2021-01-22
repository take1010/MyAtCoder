#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define MOD 1000000007
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

int main(){
    int n, numa, numb; 
    cin >> n; 
    ll x, maxa=0, maxb=0;

    int pn = pow(2, n-1);


    rep(i, pn) {
        cin >> x; 
        if(chmax(maxa, x)) numa=i+1;
    }
    rep(i, pn) {
        cin >> x; 
        if(chmax(maxb, x)) numb=pn+i+1;
    }

    if(maxa>maxb) cout << numb << endl;
    else cout << numa << endl;

	return 0;
}

