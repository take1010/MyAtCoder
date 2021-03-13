#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define MOD 1000000007
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

int main(){
	int a, b, w; 
    cin >> a >> b >> w;
	
    w *= 1000;

    int ma=0, mi=100000000;

    for(int i=1; 1; i++){
        if(a*i<=w && b*i>=w){
            chmax(ma, i);
            chmin(mi, i);
        }
        else if(a*i>w) break;
    }

    if(ma==0) cout << "UNSATISFIABLE" << endl;
    else cout << mi << " " << ma << endl;

    return 0;
}
