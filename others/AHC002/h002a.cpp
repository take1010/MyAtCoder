#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define rep(i, n) for(ll i = 0; i < (ll)(n); i++)
#define MOD 1000000007
#define coutALL(x) for(auto i=x.begin();i!=--x.end();i++) cout<<*i<<" ";cout<<*--x.end()<<endl;
#define coutVEC2(x) rep(j, x.size()) {auto y=x.at(j); coutALL(y);}
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

vector<vector<int16_t>> t(50, vector<int16_t>(50));
vector<vector<int16_t>> p(50, vector<int16_t>(50));

int16_t ni,nj;
string nstr;

time_t oldt;
map<char, pair<int16_t, int16_t>> M;
#define pair_is pair<int16_t, string>
pair_is ans={0, ""};
vector<char> dir_vec={'U', 'D', 'L', 'R'};

void straight(int16_t si,int16_t sj, set<int16_t> seen, string tmp_str, int16_t tmp_score, int16_t n_func){
	if(n_func>3) return;
	for(auto d:dir_vec){
		ni=si;
		nj=sj;
		nstr=tmp_str;
		
		while(1){
			ni += M[d].first;
			nj += M[d].second;
			if(ni<0 || ni>=50 || nj<0 || nj>=50){
				ni -= M[d].first;
				nj -= M[d].second;
				break;
			}else if(seen.count(t[ni][nj])!=0){
				ni -= M[d].first;
				nj -= M[d].second;
				break;
			}else{
				nstr += d;
				tmp_score += p[ni][nj];
				seen.insert(t[ni][nj]);
			}
		}
		if(ni!=si || nj!=sj) {
			if(chmax(ans.first, tmp_score)) {
				ans.second=nstr;
				straight(ni, nj, seen, nstr, tmp_score, n_func+1);
			}
		}
	}
	return;
}



int main(){
	oldt=time(NULL);
	// input
	int16_t si,sj;
	cin>>si>>sj;
	rep(i, 50) rep(j, 50) cin>>t[i][j];
	rep(i, 50) rep(j, 50) cin>>p[i][j];
	
	// map init
	M['U']={-1, 0};
	M['D']={1, 0};
	M['L']={0, -1};
	M['R']={0, 1};

	set<int16_t> seen_s;
	seen_s.insert(t[si][sj]);
	straight(si, sj, seen_s, "", p[si][sj], 0);
	
	
	cout<<ans.second<<endl;

	return 0;
}