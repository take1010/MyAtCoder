#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define MOD 1000000007
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

int main(){
	int h, w, count, begin, end;
    cin >> h >> w;
	vector<vector<char>> data(h+1, vector<char>(w+1));
	vector<vector<int>> num(h+1, vector<int>(w+1));

    rep(i, h+1) rep(j, w+1){
        if(i!=h && j!=w) cin >> data.at(i).at(j);
        else data.at(i).at(j) = '#';
    }


    rep(i, h){
        count=0;
        rep(j, w+1){
            if(data.at(i).at(j) == '.'){
                if(count==0) begin=j;
                count++;
            }else if(count>0){
                end=j-1;
                for(int k=begin; k<=end; k++){
                    num.at(i).at(k) += count;
                }
                count=0;
            }
        }
    }

    rep(j, w){
        count=0;
        rep(i, h+1){
            if(data.at(i).at(j) == '.'){
                if(count==0) begin=i;
                count++;
            }else if(count>0){
                end=i-1;
                for(int k=begin; k<=end; k++){
                    num.at(k).at(j) += count;
                }
                count=0;
            }
        }
    }

    // rep(i, h){
    //     rep(j, w){
    //         if(j) cout << " ";
    //         cout << num.at(i).at(j);
    //     }
    //     cout << endl;
    // }

    int ans=0;
    rep(i, h) rep(j, w) chmax(ans, num.at(i).at(j));
    cout << ans-1 << endl;

	return 0;
}
