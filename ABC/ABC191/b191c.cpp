#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define MOD 1000000007
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

int main(){
	int h, w, ans=0;
	cin >> h >> w;

	vector<vector<char>> s(h, vector<char>(w));

	rep(i, h) rep(j, w) cin >> s.at(i).at(j);

	rep(i, h-1) rep(j, w-1){
		int count=0;
		if(s.at(i).at(j)=='#') count++;
		if(s.at(i).at(j+1)=='#') count++;
		if(s.at(i+1).at(j)=='#') count++;
		if(s.at(i+1).at(j+1)=='#') count++;
		if(count%2==1) ans++;
	}
	cout << ans << endl;
	
	return 0;
}
