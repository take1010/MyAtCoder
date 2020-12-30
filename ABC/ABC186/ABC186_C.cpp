#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define MOD 1000000007
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

int check(int x, int y){
    do{
        if(x%y==7){
            return 0;
        }
    x /= y;    
    }while(x>0);

    return 1;
}




int main(){
    int n,x,ans=0;
    cin >> n;

    for(int i=1; i<=n; i++){
        if(check(i, 8)*check(i, 10)==1) ans++;
    }
    cout << ans << endl;
	return 0;
}
