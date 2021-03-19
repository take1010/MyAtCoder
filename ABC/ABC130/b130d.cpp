#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define coutALL(x) for(auto i=x.begin();i!=--x.end();i++) cout<<*i<<" ";cout<<*--x.end()<<endl;
#define MOD 1000000007
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

int main(){
	ll n, k, ans=0;
    cin >> n >> k;
    vector<ll> a(n), csum(n+1);
    rep(i, n) cin >> a[i];
    rep(i, n) csum[i+1] = csum[i] + a[i];

    for(int i=0; i<n+1; i++){
        int l=i, r=n+1;
        ll target=csum[i]+k;
        ll mid;
        while(r-l>1){
            mid=l+(r-l)/2;
            if(csum[mid] < target) l=mid;
            else r=mid;
        }
        ans += n-l;
    }
    
    cout << ans << endl;
	return 0;
}
