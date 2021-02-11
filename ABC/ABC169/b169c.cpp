#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define MOD 1000000007
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

int main(){
    ll a;
    string b;
    cin >> a >> b;

    ll c = (b[0]-'0')*100 + (b[2]-'0')*10 + (b[3]-'0');
    cout << a*c/100 << endl;

	return 0;
}
