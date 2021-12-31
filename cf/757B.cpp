#include<bits/stdc++.h>
using ll = int64_t;
 
using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<pair<ll,ll>> times(n);
    for(int i = 0; i < n; i++){
        ll x;
        cin>>x;
        times.push_back({i,x});
    }
    //sort first
    sort(times.rbegin(), times.rend(), [&](pair<ll,ll> a, pair<ll,ll> b){
        return a.second < b.second;
    });

    //the biggest element is in 0
    vector<ll> ans(n+1);
    ans[0] = 0;
    int s1 = 0;
    int s2 = 0;
    ll total = 0;
    for(int i = 0; i < n; i++){
        if(i%2==0){
            ans[times[i].first+1] = ++s1;
            total += 2*(abs(0-ans[times[i].first+1]))*times[i].second;
        }
        else{
            ans[times[i].first+1] = --s2;
            total += 2*(abs(0-ans[times[i].first+1]))*times[i].second;
        }
    }
    cout<<total<<endl;
    for(ll x:ans){
        cout<<x<<" ";
    }
    cout<<endl;
}

int main(){
	ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--)
        solve();
}
