#include <bits/stdc++.h>
using namespace std;
typedef long long ll;



int main(){
	//¬”‚ÌŒ…”‚Ìo—Íw’è
	cout << fixed;
	
	ll N, X;
	ll i, j;
	
	cin >> N;
	for(i=1; N >= powl(5, i);i++){
		for(j=1; N >= powl(5, i) + powl(3, j); j++){
			if(N != powl(5, i) + powl(3, j))continue;
			else{
				cout << j << " " << i << endl;
				return 0;
			}
		}
	}
	cout << "-1" << endl;
	return 0;
	
}