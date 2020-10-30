#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int main(){
	string S, T;
	int min=1001;
	int count, i, j;

	cin >> S >> T;

	for(i=0; i<S.length()-T.length()+1; i++){
		count = 0;
		for(j=0; j<T.length(); j++){
			if(S[i+j] != T[j]) count++;
		}
		if(count<min) min=count;
	}
	cout << min << endl;

	


}