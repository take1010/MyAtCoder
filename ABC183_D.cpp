#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define MOD 1000000007

int main(){
    ll N, W, x, i, j;
    ll water[200000][3]; 
	cin >> N >> W;
    
    for(i = 0; i < N; i++)cin >> water[i][0] >> water[i][1] >> water[i][2];

    for(i=0; i<200000; i++){
        x=0;
        for(j=0; j<N; j++){
            if(water[j][0]<=i && i<water[j][1])x += water[j][2];
        }
        if(x>W){
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
    return 0;
    

}