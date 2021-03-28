#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define MOD 1000000007
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

int main(){
	int k;
	string s;
	cin >> k;
	cin >> s;
	cout << s.substr(0,k);
	if(s.size()>k) cout << "...";
	cout<<endl;
	return 0;
}
