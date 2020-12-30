#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define MOD 1000000007
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

int main(){
    int h,w,sum,min,x;
    cin >> h >> w;

    sum=0;
    min=101;

    rep(i, h*w){
        cin >> x;
        sum += x;
        chmin(min, x);
    }

    cout << sum-min*h*w << endl;
    
	return 0;
}
