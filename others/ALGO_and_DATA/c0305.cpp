#include <bits/stdc++.h>
using namespace std;

int main(){
    int n=3; 

    for(int bit=0; bit<(1<<n); bit++){
        cout << "bit: " << bit << endl;
        for(int i=0; i<n; i++){
            if(bit & 1<<i){
                cout << "1 "; 
            }else{
                cout << "0 ";
            }
        }
        cout << endl;
    }
	return 0;
}
