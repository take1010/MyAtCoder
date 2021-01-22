#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

vector<ll> memo;

// fibo数列のN番目を出力
ll fibo(int N){
    if(N==0) return 0;
    else if(N==1) return 1;

    if(memo[N]!=-1) return memo[N]; 
    return memo[N] = fibo(N-1) + fibo(N-2);
}

int main(){
    int n; 
    cin >> n; 
    //vectorの初期化(-1)
    memo.assign(n, -1);

    fibo(n-1); 
    for(int i=2; i<n; i++){
        cout << i << "項目: " << memo[i] << endl;
    }




}