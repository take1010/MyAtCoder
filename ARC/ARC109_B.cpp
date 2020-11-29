#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define MOD 1000000007

int main(){
    ll n;
	cin >> n;
	ll ans;
	ll minK=1, maxK=1e10, medK;
	ll minS, maxS;

	do{
		medK = (minK+maxK)/2; 
		minS=medK*(medK+1)/2;
		maxS=(medK+1)*(medK+2)/2;
		// cout << "minK: "<< minK << " maxK: "<< maxK << endl;
		// cout << "minS: "<< minS << " maxS: "<< maxS << endl;
		if(n+1<minS){
			maxK=medK-1;
		}else if(maxS<=n+1){
			minK=medK+1;
		}else{
			minK=medK;
			maxK=medK;
		}
	}while(maxK-minK>0);


	// cout << "minK: "<< minK << endl;
	cout <<  n-minK+1 << endl;
	return 0;
}
