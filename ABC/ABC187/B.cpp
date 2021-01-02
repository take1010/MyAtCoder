#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define MOD 1000000007
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

int main(){
    int n, x, y, ans=0;
    int point[1001][2]; 
    
    cin >> n;
    
    rep(i, n){
        cin >> point[i][0] >> point[i][1];
    }

    rep(i, n) rep(j, i){
        if(abs(point[i][0]-point[j][0]) >= abs(point[i][1]-point[j][1]))ans++;
    }
    
    cout << ans << endl;
	return 0;
}
