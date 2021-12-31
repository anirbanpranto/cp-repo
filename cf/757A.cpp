#include<bits/stdc++.h>
using ll = int64_t;
 
using namespace std;
 
void solve(){
    int n,r,l,m;
    cin>>n>>r>>l>>m;
    vector<ll> choco(n);
    for(ll &x:choco) cin>>x;
    sort(choco.begin(), choco.end());
    int ans = 0;
    for(int i = 0; i < n; i++){
        if(choco[i]>=r && choco[i]<=l && m-choco[i] >= 0){
            ans++;
            m -= choco[i];
        }
    }
    cout<<ans<<endl;
}

int main(){
	ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--)
     solve();
}

