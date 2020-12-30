#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll dis(pair<ll, ll> a, pair<ll, ll> b);

int main(){
	ll i, j, old_T, T;
    ll N;
    pair<ll, ll> OLD, NEW;

    OLD.first=0; 
    OLD.second=0;
    old_T=0;

    cin >> N;
    for(i=0; i<N; i++) {
        cin >> T >> NEW.first >> NEW.second;
        if(T-old_T >= dis(OLD, NEW) && (dis(OLD, NEW)-T+old_T)%2 == 0){
            old_T = T;
            OLD = NEW;
        }else{
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
}

ll dis(pair<ll, ll> a, pair<ll, ll> b){
    return abs(a.first-b.first) + abs(a.second-b.second);
}