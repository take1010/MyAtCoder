#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define MOD 1000000007
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

int score(vector<int> aa){
    int ret=0;
    for(int i=1; i<10; i++){
        ret += i*pow(10, aa[i]);
    }
    return ret;
}


int main(){
    cout << fixed << setprecision(10);
    int k;
    string s, t;

    cin >> k >> s >> t;
    vector<int> ss(10), tt(10);
    double ans=0;

    rep(i, 4){
        int x = s[i]-'0';
        ss[x]++;
    }
    rep(i, 4){
        int x = t[i]-'0';
        tt[x]++;
    }

    for(int i=1; i<10; i++){
        for(int j=1; j<10; j++){
            if(i==j){
                if(ss[i]+tt[i]+2>k) continue;
                else{
                    ss[i]++;
                    tt[j]++;
                    if(score(ss)>score(tt)){
                        // cout << i << j << endl;
                        double xx = k-ss[i]-tt[i]+2;
                        xx *= k-ss[i]-tt[i]+1;
                        xx /= 9*k-8;
                        xx /= 9*k-9;
                        ans += xx;
                    }
                    ss[i]--;
                    tt[j]--;
                }
            }else{
                if(ss[i]+tt[i]+1>k || ss[j]+tt[j]+1>k) continue;
                else{
                    ss[i]++;
                    tt[j]++;
                    if(score(ss)>score(tt)){
                        // cout << i << j << endl;
                        double xx = k-ss[i]-tt[i]+1;
                        xx *= k-ss[j]-tt[j]+1;
                        xx /= 9*k-8;
                        xx /= 9*k-9;
                        ans += xx;
                    }
                    ss[i]--;
                    tt[j]--;
                }
            }
        }
    }
    cout << ans << endl;


	
	return 0;
}
