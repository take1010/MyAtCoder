#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define MOD 1000000007
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

int main(){
	ll n, k;
    cin >> n >> k;

    vector<ll> num(10);
    ll g1, g2;
	
    rep(i, k){
        num.assign(10, 0);
        do{
            num[n%10]++;
            n /= 10;
        }while(n>0);

        g1=0;
        for(int j=9; j>=0; j--){
            rep(l, num[j]){
                g1= g1*10+j;
            }
        }
        g2=0;
        for(int j=0; j<=9; j++){
            rep(l, num[j]){
                g2= g2*10+j;
            }
        }
        n=g1-g2;
    }

    cout << n << endl;
	
	return 0;
}
