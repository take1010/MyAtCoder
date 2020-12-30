#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define MOD 1000000007
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

int main(){
    int n;
    vector<ll> a, b;
    ll buffer, ans=0, bmax=0, sum;

    cin >> n;
    rep(i, n){
        cin >> buffer;
        a.push_back(buffer);
    }
    sum=0;
    rep(i, n){
        sum += a[i];
        b.push_back(sum);
    }

    sum=0;
    rep(i, n){
        chmax(bmax, b[i]);
        chmax(ans, sum+bmax); 
        sum += b[i];
    }

    cout << ans << endl;
	return 0;
}
