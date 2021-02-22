#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define MOD 1000000007
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }
// 解けなかった
int main(){
	string s;
    cin >> s;

    int n=s.size();
    char memo=' ';
    int now=0, ans=0;

    rep(i, n){
        ans += now;
        if(i==0) continue;
        if(s[i-1]==s[i] && s[i]!=memo){
            memo=s[i];
            now++;
        }
        if(memo == s[i]) ans--;
    }
    ans += now;

	cout << ans << endl;
	return 0;
}
