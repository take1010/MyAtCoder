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
    int num[3];
    int x, sum=0;

    rep(i, 3) num[i]=0;

    for(int i=0; i<s.size(); i++){
        x=s[i]-'0';
        sum += x;
        num[x%3]++;
    }
    sum %= 3;
    
    if(sum==0){
        cout << 0 << endl;
        return 0;
    }else if(sum==1){
        if(num[1]>=1 && s.size()>1){
            cout << 1 << endl;
            return 0;
        }else if(num[2]>=2 && s.size()>2){
            cout << 2 << endl;
            return 0;
        }
    }else{
        if(num[2]>=1 && s.size()>1){
            cout << 1 << endl;
            return 0;
        }else if(num[1]>=2 && s.size()>2){
            cout << 2 << endl;
            return 0;
        }
    }
    cout << -1 << endl;
	return 0;
}
