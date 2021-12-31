/*
ID: codeboi08
PROG: helpcross
LANG: C++                
*/
#include<bits/stdc++.h>
using ll = int64_t;
 
using namespace std;

void solve(){
    int c, n;
    cin>>c>>n;
    vector<ll> chicken(c);
    vector<bool> visited(n, false);
    vector<pair<ll,ll>> cow(n);
    for(ll &x:chicken){
        cin>>x;
    }

    for(pair<ll,ll> &x:cow){
        int a,b;
        cin>>a>>b;
        x = {a,b};
    }

    sort(cow.begin(), cow.end(), [](auto &left, auto &right) {
        return left.second < right.second;
    });

    sort(chicken.begin(), chicken.end());
    
    int ans = 0;

    for(int i = 0; i < c; i++){
        for(int j = 0; j < n; j++){
            if(!visited[j] && cow[j].first <= chicken[i] && chicken[i] <= cow[j].second){
                //cout<<cow[j].second<<" "<<chicken[i]<<endl;
                visited[j] = true;
                ans++;
                break;
            }
        }
    }
    cout<<ans<<endl;
}

int main(){
	freopen("helpcross.in","r",stdin);
    freopen("helpcross.out","w",stdout);
	ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
}

