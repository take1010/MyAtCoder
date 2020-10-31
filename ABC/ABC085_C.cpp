#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int main(){
    ll N, Y, i, j;

    cin >> N >> Y;

    for(i=0; Y >= 10000*i && i <= N; i++){
        for(j=0; Y >= 10000*i + 5000*j && i+j <= N; j++){
            if(Y-10000*i-5000*j == 1000*(N-i-j)){
                cout << i << " " << j << " " << N-i-j << endl; 
                return 0;
            }
        }
    }
    cout << "-1 -1 -1" << endl;

}
