#include <bits/stdc++.h>
using namespace std;

// 1からnまでの総和
int func(int n){
    if(n==0) return 0;
    else return func(n-1)+n;
}

int main(){
    int n;
    cin >> n;
    cout << func(n) << endl;
	return 0;
}
