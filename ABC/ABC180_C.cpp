#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define MOD 1000000007

int main(){
    ll N, i, ans[100000], num=0;

	cin >> N;

    for(i=1; i*i<=N; i++){
        if(N%i == 0){
            ans[num] = i;
            num++; 
            if(i*i != N){
                ans[num] = N/i;
                num++;
            }
        }
    }
    sort(ans, ans+num);
    for(i=0; i<num; i++)cout << ans[i] << endl;
}
