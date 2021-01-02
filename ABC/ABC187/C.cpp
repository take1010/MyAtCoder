#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define MOD 1000000007
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

int main(){
    int n, tag;
    string s;
    

    cin >> n;
    set<string> a, b;

    rep(i, n){
        cin >> s;
        if(s[0]=='!'){
            s=s.substr(1);
            if(a.count(s)){
                cout << s << endl;
                return 0;
            }else{
                b.insert(s);
            }
        }else{
            if(b.count(s)){
                cout << s << endl;
                return 0;
            }else{
                a.insert(s);
            }
        }
    }

    cout << "satisfiable" << endl;

	return 0;
}
