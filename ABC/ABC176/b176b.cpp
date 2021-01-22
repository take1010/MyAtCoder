#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define MOD 1000000007
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

int main(){
	string s;
    int sum=0;

    cin >> s;
    for(auto c: s){
        sum += c-'0';
    }
    
    if(sum%9) cout << "No" << endl;
    else cout << "Yes" << endl;

	return 0;
}
