#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define MOD 1000000007


int main(){
    vector<int> a;

    a.push_back(3);
    a.push_back(1);
    a.push_back(5);
    a.pop_back();
    a.push_back(4);

    cout << a.size() << endl;
    // > 3

    rep(i, a.size()) cout << a[i] << endl;
    // > 3 1 4





	return 0;
}
