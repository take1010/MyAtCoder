#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define MOD 1000000007
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

int main(){
	string s;
    cin >> s;
    rep(i, s.size()){
        if(i%2 == 0){
            if(s[i]<'a' || s[i]>'z'){
                cout << "No" << endl;
                return 0;
            }
        }else{
            if(s[i]<'A' || s[i]>'Z'){
                cout << "No" << endl;
                return 0;
            }
        }
    }
	cout << "Yes" << endl;
	return 0;
}
