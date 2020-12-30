#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define MOD 1000000007
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

int main(){
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    int ans = 101;
    chmin(ans, a);
    chmin(ans, b);
    chmin(ans, c);
    chmin(ans, d);

    cout << ans << endl;

	return 0;
}
