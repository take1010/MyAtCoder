#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define MOD 1000000007
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

int main(){
	int ans, gcd=0, n, x, MAX=0;
    cin >> n;
    
    vector<int> a;
    rep(i, n){
        cin >> x; 
        a.push_back(x);
        chmax(MAX, x);
    } 

    int count;
    for (int i = 2; i <= MAX; i++){
        count = 0;
        rep(j, a.size()){
            if(a[j]%i == 0)count++;
        }
        if(chmax(gcd, count)){
            ans=i;
        }
    }
    
    cout << ans << endl;
}