#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define MOD 1000000007

int main(){
    int n, x;
    cin >> n >> x;

    string s;
    cin >> s;

    int ans = x;
    for(int i=0; i<s.size(); i++){
        if(s[i]=='o')ans++;
        else if(ans>0)ans--;
    } 
    cout << ans << endl;
}
