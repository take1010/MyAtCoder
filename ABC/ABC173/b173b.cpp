#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define MOD 1000000007
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

int main(){
	int n;
    string s;
    vector<int> ans(4);
    ans.assign(4, 0); 

    cin >> n;
    rep(i, n){
        cin >> s;
        if(s=="AC")ans[0]++;
        else if(s=="WA")ans[1]++;
        else if(s=="TLE")ans[2]++;
        else ans[3]++;
    }

    cout << "AC x " << ans[0] << endl;
    cout << "WA x " << ans[1] << endl;
    cout << "TLE x " << ans[2] << endl;
    cout << "RE x " << ans[3] << endl;

	return 0;
}
