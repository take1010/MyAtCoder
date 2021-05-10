#include <bits/stdc++.h>
// #include <atcoder/all>
using namespace std;
// using namespace atcoder;
typedef long long ll;
const ll MOD = 200;

#define rep(i, n) for(ll i = 0; i < (ll)(n); i++)
#define coutALL(x) for(auto i=x.begin();i!=--x.end();i++) cout<<*i<<" ";cout<<*--x.end()<<endl;
#define coutVEC2(x) rep(j, x.size()) {auto y=x.at(j); coutALL(y);}
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

int main(){
	ll n,y;
	cin>>n;
	vector<ll> a(n);
	rep(i, n) cin>>a[i];
	rep(i, n) a[i] %= MOD;

	ll bi,bj,ci,cj;
	ll flag=0;
	ll tmpx,tmpy;

	vector<ll> bb,cc;
	vector<ll> seen(MOD, -1); 
	vector<vector<ll>> dp(n, vector<ll>(MOD, -1));
	rep(i, n){
		rep(j, i) rep(k, MOD){
			if(dp[j][k]!=-1){
				y=(a[i]+k)%MOD;
				dp[i][y]=j;
				if(seen[y]==-1) seen[y]=i;
				else{
					flag=1;
					bi=i;
					ci=seen[y];
					bj=y;
					cj=y;
					break;
				}
			}
		}
		if(flag) break;


		y=a[i];
		if(seen[a[i]]==-1){
			seen[y]=i;
			dp[i][y]=i;
		}else{
			flag=1;
			bi=seen[y];
			bj=y;
			while(1){
				// cout<<"bi: "<<bi<<"   bj: "<<bj<<endl;
				bb.push_back(bi);
				if(bi==dp[bi][bj]) break;
				tmpx=dp[bi][bj];
				tmpy=(bj-a[bi]+MOD)%MOD;
				bi=tmpx;
				bj=tmpy;
			}
			sort(bb.begin(), bb.end());
			cout<<bb.size()<<" ";
			rep(i, bb.size()) cout<<bb[i]+1<<" ";
			cout<<endl;
			cout<<1<<" "<<i+1<<endl;
			return 0;
		}

		
	}
	// cout<<"##### dp.begin #####"<<endl;
	// coutVEC2(dp);
	// cout<<"##### dp.end #####"<<endl;

	if(flag){
		cout<<"Yes"<<endl;
		// cout<<bi<<" "<<bj<<" "<<ci<<" "<<cj<<endl;
		while(1){
			// cout<<"bi: "<<bi<<"   bj: "<<bj<<endl;
			bb.push_back(bi);
			if(bi==dp[bi][bj]) break;
			tmpx=dp[bi][bj];
			tmpy=(bj-a[bi]+MOD)%MOD;
			bi=tmpx;
			bj=tmpy;
		}
		sort(bb.begin(), bb.end());
		cout<<bb.size()<<" ";
		rep(i, bb.size()) cout<<bb[i]+1<<" ";
		cout<<endl;
		while(1){
			cc.push_back(ci);
			if(ci==dp[ci][cj]) break;
			tmpx=dp[ci][cj];
			tmpy=(cj-a[ci]+MOD)%MOD;
			ci=tmpx;
			cj=tmpy;
		}
		sort(cc.begin(), cc.end());
		cout<<cc.size()<<" ";
		rep(i, cc.size()) cout<<cc[i]+1<<" ";
		cout<<endl;
	}else{
		cout<<"No"<<endl;
	}
	
	return 0;
}