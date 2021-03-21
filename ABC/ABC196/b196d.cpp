#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define coutALL(x) for(auto i=x.begin();i!=--x.end();i++) cout<<*i<<" ";cout<<*--x.end()<<endl;
#define MOD 1000000007
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

int h,w,sq;

int hanjo(vector<int> st, int two, int beg){
    if(two==0) return 1;
    int ret=0;
    for(int i=beg; i<sq; i++){
        if(i<sq-w){
            if(st[i]==0 && st[i+w]==0){
                st[i]=1;
                st[i+w]=1;
                ret += hanjo(st,two-1,i+1);
                st[i]=0;
                st[i+w]=0;
            }
        }
        if(i%w != w-1){
            if(st[i]==0 && st[i+1]==0){
                st[i]=1;
                st[i+1]=1;
                ret += hanjo(st,two-1,i+1);
                st[i]=0;
                st[i+1]=0;
            }
        }
    }

    return ret;
}


int main(){
	int a,b;
    cin>>h>>w;
    cin>>a>>b;
    sq=h*w;

    vector<int> state(sq);
    int ans=hanjo(state, a, 0);
    cout << ans << endl;
	
	return 0;
}
