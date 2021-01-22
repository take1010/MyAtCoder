#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define MOD 998244353
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }


int main(){
	int dp[1000][1000];
	int h, w, k;
	int x, y;
	char z;
	
	cin >> h >> w >> k;
	for(int i=1; i<=h; i++) for(int j=1; j<=w; j++) dp[i][j] = 0;
	for(int i=1; i<=h; i++) dp[i][0] = 1;
	for(int j=1; j<=w; j++) dp[0][j] = 1;
	
	
	char MAP[501][501];
	for(int i=1; i<=h; i++) for(int j=1; j<=w; j++) MAP[i][j] = 'A';
	for(int i=1; i<=h; i++) MAP[i][0] = 'D';
	for(int j=1; j<=w; j++) MAP[0][j] = 'R';
	MAP[1][0]='R';

	rep(i, k){	
		cin >> x >> y >> z;
		MAP[x][y]=z;
	}

	set<char> sX = {'X'};
	set<char> sD = {'D'};
	set<char> sR = {'R'};
	set<char> sA = {'X', 'D', 'R'};

	set<char> sU, sL;
	for(int i=1; i<=h; i++) for(int j=1; j<=w; j++) {
		if(MAP[i][j-1]=='X') sL=sX;
		else if(MAP[i][j-1]=='D') sL=sD;
		else if(MAP[i][j-1]=='R') sL=sR;
		else sL=sA;

	for(int i=1; i<=h; i++) for(int j=1; j<=w; j++) {
		if(MAP[i-1][j]=='X') sU=sX;
		else if(MAP[i-1][j]=='D') sU=sD;
		else if(MAP[i-1][j]=='R') sU=sR;
		else sU=sA;
	}


		for(char c1: sL) for(char c2: sU){
			if(c1 == 'X' || 'D') dp[i][j] = (dp[i][j] + dp[i-1][j]) % MOD;
			if(c1 == 'X' || 'R') dp[i][j] = (dp[i][j] + dp[i-1][j]) % MOD;
		}	
	}
	
	ll ans=dp[h][w];
	if(MAP[h][w]=='A') ans = (3*ans)%MOD;

	cout << ans << endl;

	return 0;
}
