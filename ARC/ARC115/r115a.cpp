#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define MOD 1000000007
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

int main(){
    ll n, m;
	cin>>n>>m;
    vector<string> s(n);
    rep(i, n) cin>>s[i];
    
    ll ev=0,od=0;

    rep(i, n){
        int tmp=0;
        rep(j, m){
            if(s.at(i)[j] != '0'){
                tmp++;
            }
        }
        // cout << i << "   " << tmp << endl;
        if(tmp%2)od++;
        else ev++;
    }

    cout << od*ev <<endl;
	return 0;
}
