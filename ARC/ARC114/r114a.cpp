#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define coutALL(x) for(auto i=x.begin();i!=--x.end();i++) cout<<*i<<" ";cout<<*--x.end()<<endl;
#define MOD 1000000007
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

int main(){
	int n;
    cin >> n;
    vector<ll> x(n);
    vector<ll> prime={2,3,5,7,11,13,17,19,23,29,31,37,41,43,47};
    vector<ll> s;
    
    rep(i, n) cin >> x[i];
    sort(x.begin(), x.end());

    for(int bit=0; bit< 1<<prime.size() ; bit++){
        ll x=1;
        rep(i, prime.size()){
            if(bit & 1<<i) x *= prime[i];
        }
        s.push_back(x);
    }
    sort(s.begin(), s.end());
    s[0] = 2;
    // rep(i, s.size()) cout << s[i] << endl; 

    for(auto p: s){
        int flag = 1;
        rep(i, n){
            if(__gcd(p, x[i])==1){
                flag=0;
            }
        }
        if(flag == 1){
            cout << p << endl;
            return 0;
        }
    }
	return 0;
}

