#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int main(){
    string S;
	cin >> S;
    int N=S.length(); 
    int i, j, k, x, NN=0, X[200000], num[9];

    if (S[0]=='-'){
        for(i=0; i<N-1; i++){
            S[i] = S[i+1];
        }
        N--;
    }
    
    for(i=0; i<9; i++)num[i] = 0;
    for(i=0; i<N; i++){
        x = (int) S[i]-'0';
        if(num[x-1]<3){
            X[NN]=x;
            num[x-1]++;
            NN++;
        }
    }

    if (NN == 1){
       if(X[0]%8==0){
           cout << "Yes" << endl; 
           return 0;
       }else {
           cout << "No" << endl; 
           return 0;
       }
    }else if (NN == 2){
       if((10*X[0]+X[1])%8==0 || (10*X[1]+X[0])%8==0){
           cout << "Yes" << endl; 
           return 0;
       }else {
           cout << "No" << endl; 
           return 0;
       }
    }else{
        for(i=0; i<NN; i++){
            for(j=0; j<NN; j++){
                if(i==j)continue;
                for(k=0; k<NN; k++){
                    if(i==k || j==k)continue;
                    //cout << i << j << k << endl;
                    if ((100*X[i]+10*X[j]+X[k])%8==0){
                        cout << "Yes" << endl; 
                        return 0;
                    }
                }
            }
        }  
    }
    cout << "No" << endl;

}