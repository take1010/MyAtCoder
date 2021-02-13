#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define MOD 1000000007
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

// 解けなかった

int n;
int flag=0;
int check(int num, vector<int> p){
    // cout << "num: " << num << endl;
    vector<int> child;
    rep(i, n-1){
        if(p[i]==num) child.push_back(i);
    }
    // cout << "size: " << child.size() << endl;
    if(child.size()==0) return 1;
    else if(child.size()==1) return check(child[0]+1, p)+1;
    else{
        flag=1;
        int ret=0;
        int one=1;
        vector<int> point;

        rep(i, child.size()) point.push_back(check(child[i]+1, p));
        sort(point.begin(), point.end());
        // cout << "point: ";
        rep(i, point.size()) cout << point[i];
        cout << endl; 

        rep(i, point.size()){
            ret += one*point[i];
            one *= -1;
        }
        return ret+1;
    }
    
}

int main(){
    cin >> n;
    vector<int> p(n-1);
    rep(i, n-1) {
        cin >> p[i];
        p[i]--;
    }

    int ans = check(0, p);
    if(flag) ans += (n+1)/2;
    cout << ans << endl;
	return 0;
}