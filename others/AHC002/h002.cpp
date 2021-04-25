#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define rep(i, n) for(ll i = 0; i < (ll)(n); i++)
#define MOD 1000000007
#define coutALL(x) for(auto i=x.begin();i!=--x.end();i++) cout<<*i<<" ";cout<<*--x.end()<<endl;
#define coutVEC2(x) rep(j, x.size()) {auto y=x.at(j); coutALL(y);}
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

vector<vector<int>> t(50, vector<int>(50));
vector<vector<int>> p(50, vector<int>(50));



int main(){
	int si,sj;
	cin>>si>>sj;

	rep(i, 50) rep(j, 50) cin>>t[i][j];
	rep(i, 50) rep(j, 50) cin>>p[i][j];

	map<char, pair<int, int>> M;
	M['U']={-1, 0};
	M['D']={1, 0};
	M['L']={0, -1};
	M['R']={0, 1};

	vector<char> dir_vec={'U', 'D', 'L', 'R'};
	int ans_score=0, tmp_score, tmpp_score, tmppp_score;
	string ans_str;

	int ni,nj,nni,nnj,nnni,nnnj;
	string tmp_str, tmpp_str, tmppp_str;
	set<int> seen_s, seen_ss, seen_sss;

	for(auto d:dir_vec){
		ni=si;
		nj=sj;
		seen_s.insert(t[si][sj]);

		tmp_str="";
		tmp_score=p[si][sj];

		while(1){
			ni += M[d].first;
			nj += M[d].second;
			if(ni<0 || ni>=50 || nj<0 || nj>=50){
				ni -= M[d].first;
				nj -= M[d].second;
				break;
			}else if(seen_s.count(t[ni][nj])!=0){
				ni -= M[d].first;
				nj -= M[d].second;
				break;
			}else{
				tmp_str += d;
				tmp_score += p[ni][nj];
				seen_s.insert(t[ni][nj]);
			}
		}
		for(auto dd: dir_vec){
			tmpp_str=tmp_str;
			tmpp_score=tmp_score;
			seen_ss=seen_s;
			nni=ni;
			nnj=nj;

			while(1){
				nni += M[dd].first;
				nnj += M[dd].second;
				if(nni<0 || nni>=50 || nnj<0 || nnj>=50){
					nni -= M[dd].first;
					nnj -= M[dd].second;
					break;
				}else if(seen_ss.count(t[nni][nnj])!=0){
					nni -= M[dd].first;
					nnj -= M[dd].second;
					break;
				}else{
					tmpp_str += dd;
					tmpp_score += p[nni][nnj];
					seen_ss.insert(t[nni][nnj]);
				}
				for(auto ddd: dir_vec){
					tmppp_str=tmpp_str;
					tmppp_score=tmpp_score;
					seen_sss=seen_ss;
					nnni=nni;
					nnnj=nnj;

					while(1){
						nnni += M[ddd].first;
						nnnj += M[ddd].second;
						if(nnni<0 || nnni>=50 || nnnj<0 || nnnj>=50){
							nnni -= M[ddd].first;
							nnnj -= M[ddd].second;
							break;
						}else if(seen_sss.count(t[nnni][nnnj])!=0){
							nnni -= M[ddd].first;
							nnnj -= M[ddd].second;
							break;
						}else{
							tmppp_str += ddd;
							tmppp_score += p[nnni][nnnj];
							seen_sss.insert(t[nnni][nnnj]);
						}
					}
				}
				if(chmax(ans_score, tmppp_score)) ans_str=tmppp_str;
			}
			
		}
	}
	cout<<ans_str<<endl;
	return 0;
}