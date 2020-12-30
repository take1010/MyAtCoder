#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define MOD 1000000007

int main(){
	ll N, i, buf;
    set<ll> a;
    
    cin >> N;
    for(i=0; i<N; i++){
        cin >> buf;
        a.insert(buf);
    }
    cout << a.size() << endl;

}