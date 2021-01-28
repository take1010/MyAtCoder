#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define MOD 1000000007
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

int main(){
	string s;
    int ans=0, now=0;

    cin >> s;
    rep(i, 3){
        if(s[i]=='R') now++;
        else {
            chmax(ans, now);
            now=0;
        }
    }
    cout << max(ans, now) << endl;
	return 0;
}
