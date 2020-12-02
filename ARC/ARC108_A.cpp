#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define MOD 1000000007

int main(){
	ll s, p;

    cin >> s >> p;

    ll i;
    for(i=1; i*i<=p; i++){
        if(p%i==0){
            if(i+p/i==s){
                cout << "Yes" << endl;
                return 0;
            }
        }
    }
    cout << "No" << endl;
}
