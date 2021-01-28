#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

vector<ll> memo;

// fibo数列のN番目を出力
ll fibo(int N){
    // ベースケースの記述
    if(N==0) return memo[N] = 0;
    else if(N==1) return memo[N] = 1;

    // メモされている場合はそのままreturn
    if(memo[N]!=-1) return memo[N]; 
    // メモされていない場合はメモに格納しながらreturn
    return memo[N] = fibo(N-1) + fibo(N-2);
}

int main(){
    int n; 
    cin >> n; 
    //vectorの初期化(-1)
    memo.assign(n, -1);

    fibo(n-1); 
    for(int i=0; i<n; i++){
        cout << i << "項目: " << memo[i] << endl;
    }




}