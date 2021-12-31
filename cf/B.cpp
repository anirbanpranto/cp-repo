#include<bits/stdc++.h>
using ll = int64_t;
 
using namespace std;

void solve(){
    ll n;
    cin>>n;
    set<ll> num;
    for(ll i = 1; i <= sqrt(n); i++){
        if(i*i <= n){
            num.insert(i*i);
        }
        if(i*i*i <= n){
            num.insert(i*i*i);
        }
    }
    cout<<num.size()<<endl;
}

int main(){
	ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--)
        solve();
}

