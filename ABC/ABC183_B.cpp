#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define MOD 1000000007

int main(){
    double SX, SY, GX, GY;
	cout << fixed << setprecision(10);
    cin >> SX >> SY >> GX >> GY;

    cout << SX+(GX-SX)*SY/(SY+GY) << endl; 
}