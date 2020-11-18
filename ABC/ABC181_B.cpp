#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define MOD 1000000007

int main(){
	ll N, a, b, i, sum=0;
    cin >> N;

    for(i=0; i<N; i++){
        cin >> a >> b;
        sum += (a+b)*(b-a+1)/2;
    }

    cout << sum << endl;
}