#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define MOD 1000000007

int main(){
    int a, b, x, y, ans, d;
    cin >> a >> b >> x >> y;
    d = abs(a-b);

    if(a>b){ 
        ans = min((2*d-1)*x, x+(d-1)*y);
    }else if(a<b){
        ans = min((2*d+1)*x, x+d*y);
    }else{
        ans = x;
    }
    cout << ans << endl;
	return 0;
}
