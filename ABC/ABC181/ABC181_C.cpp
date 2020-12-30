#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define MOD 1000000007

int main(){

    int i, j, k;
    int N;
    int X[100][2];
	cin >> N;

    for(i=0; i<N; i++)cin >> X[i][1] >> X[i][2];

    for(i=0; i<N-2; i++) for(j=i+1; j<N-1; j++) for(k=j+1; k<N; k++){
        if((X[j][1]-X[i][1])*(X[k][2]-X[i][2]) == (X[k][1]-X[i][1])*(X[j][2]-X[i][2])){
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
}