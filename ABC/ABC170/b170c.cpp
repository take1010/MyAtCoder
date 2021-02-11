#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define MOD 1000000007
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

int main(){
	int x, n;
	cin >> x >> n;


	set<int> p;
	rep(i, n){
		int buf;
		cin >> buf;
		p.insert(buf);
	}

	rep(i, 101){
		if(p.count(x-i)==0){
			cout << x-i << endl;
			return 0;
		}
		if(p.count(x+i)==0){
			cout << x+i << endl;
			return 0;
		}
	}


	return 0;
}
