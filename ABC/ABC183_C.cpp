#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void SEARCH(int now, ll dis, set<int> p);

int N;
ll T[8][8];
ll K;
int ans=0;

int main(){
    
    
    ll i, j;

	cin >> N >> K;
    for(i=0; i<N; i++){
        for(j=0; j<N; j++){
            cin >> T[i][j];
        }
    }
    
    set<int> point;
    for(i=1; i<N; i++) point.insert(i);

    SEARCH(0, 0, point);

    cout << ans <<endl;
}

void SEARCH(int now, ll dis, set<int> p){
    set<int> pp;
    int i;
    if(p.size()==1){
        //cout << "last: " << *p.begin() << endl;
        if(dis+T[now][*p.begin()]+T[*p.begin()][0]==K)ans++;
    }else{
        for(int i : p){
            //cout << "i: " << i << endl;
            pp = p;
            pp.erase(i);
            SEARCH(i, dis+T[now][i], pp);
        }
    }
}