#include <bits/stdc++.h>
using namespace std;
// mとnとの最大公約数
int GCD(int m, int n){
    if(n==0) return m;
    else {
        cout << "IN GCD(" << n << ", " << m%n << ")" << endl;
        return GCD(n, m%n);
    }
}

int main(){
    cout << GCD(4531, 13199) << endl;
}