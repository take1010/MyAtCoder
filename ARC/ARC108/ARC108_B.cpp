#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	int n;
    string s;
    cin >> n >> s;

    for(int i=0; i+2<s.size(); i++){
            if(s[i]=='f' && s[i+1]=='o' && s[i+2]=='x'){
            s.erase(i, 3);
            i=min(-1, i-3);
        }
    }
    cout << s.size() << endl;   
}
