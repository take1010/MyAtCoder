#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define MOD 1000000007
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

int main(){
    int n;
	string s;

	cin >> n;
	cin >> s;

	if(n==1){
		if(s=="0"){
			cout << 10000000000 <<endl;
			return 0;
		}else{
			cout << 20000000000 <<endl;
			return 0;
		}
	}else if(n==2){
		if(s=="11" || s=="10"){
			cout << 10000000000 <<endl;
			return 0;
		}else if(s=="01"){
			cout << 9999999999 <<endl;
			return 0;
		}else{
			cout << 0 <<endl;
			return 0;
		}
	}

	ll m=0;
	if(s.substr(0,1)=="0"){
		s=s.substr(1);
		m++;
	}else if(s.substr(0,2)=="10"){
		s=s.substr(2);
		m++;
	}
	while(s.size() >= 3){
		if(s.substr(0,3)=="110"){
			s=s.substr(3);
			m++;
		}else{
			cout << 0 <<endl;
			return 0;
		}
	}
	if(s=="1" || s=="11"){
		m++;
	}else if(s.size()>0){
		cout << 0 <<endl;
		return 0;
	}

	// cout << m << endl;
	cout << 10000000001-m << endl;
	return 0;
}
