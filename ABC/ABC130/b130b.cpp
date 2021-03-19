#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define coutALL(x) for(auto i=x.begin();i!=--x.end();i++) cout<<*i<<" ";cout<<*--x.end()<<endl;
#define MOD 1000000007
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

int main(){
	int n, x;
    cin >> n >> x;
    vector<int> l(n);
    rep(i, n) cin >> l[i];

    int d=0, ans=1;
    rep(i, n){
        d += l[i];
        if(d>x) break;
        ans++;
    }
	cout << ans << endl;
	return 0;
}
