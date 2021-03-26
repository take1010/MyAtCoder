#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define MOD 1000000007
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

int main(){
	ll n;
	cin>>n;
	
	vector<pair<ll, ll>> work(n);
	
	rep(i, n){
		cin >> work[i].second >> work[i].first; 
	}

	sort(work.begin(), work.end());

	ll now=0;
	rep(i, n){
		now += work[i].second;
		if(now > work[i].first){
			cout << "No" << endl;
			return 0;
		}
	}

	cout << "Yes" << endl;
	return 0;
}
