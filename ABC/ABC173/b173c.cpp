#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define MOD 1000000007
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

int main(){
	int h, w, k;
    cin >> h >> w >> k;
	
    vector<vector<char>> board(h, vector<char>(w)); 
    ll ans=0;
    
    rep(i, h) rep(j, w) cin >> board.at(i).at(j);

    for(int bit1=0; bit1<(1<<h); bit1++){
        for(int bit2=0; bit2<(1<<w); bit2++){
            int numB = 0;
            rep(i, h) rep(j, w){
                if(board.at(i).at(j)=='#' && bit1&(1<<i) && bit2&(1<<j)) numB++;
            }
            if(numB==k)ans++;
        }
    }
    cout << ans << endl;

    return 0;
}
