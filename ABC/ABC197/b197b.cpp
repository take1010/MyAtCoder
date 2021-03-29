#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define MOD 1000000007
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

int main(){
	int h, w;
	cin>>h>>w;
	int x, y;
	cin>>x>>y;
	x--;
	y--;

	int ans=1;

	vector<vector<char>> map(h, vector<char>(w));
	rep(i, h) rep(j, w) cin>>map.at(i).at(j);

	for(int j=y-1; j>=0; j--){
		if(map.at(x).at(j)=='.') ans++;
		else break;
	}
	
	for(int j=y+1; j<w; j++){
		if(map.at(x).at(j)=='.') ans++;
		else break;
	}
	// cout<<ans<<endl;

	for(int i=x-1; i>=0; i--){
		if(map.at(i).at(y)=='.') ans++;
		else break;
	}
	for(int i=x+1; i<h; i++){
		if(map.at(i).at(y)=='.') ans++;
		else break;
	}

	cout<<ans<<endl;
	return 0;

	}
