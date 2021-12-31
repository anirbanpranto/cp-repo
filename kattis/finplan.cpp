#include<bits/stdc++.h>
using ll = int64_t;
using ld = long double;
 
using namespace std;
using Graph = vector<vector<int>>;
vector<tuple<ll,ll,ld>> d;
ll n,M;

bool check(ll day){
    //cout<<day<<endl;
    ll amt = 0;
    for(int i = 0; i < n; i++){
        ld dd = get<2>(d[i]);
        ll a = get<0>(d[i]);
        if(dd <= day){
            //cout<<dd<<" "<<day<<endl;
            amt += (day*a - dd*a);
        }
        else{
            break;
        }
    }
    return amt>=M;
}

void solve(int kes){
    //write solution here
    cin>>n>>M;
    ll mx = 0;
    d.resize(n);
    for(int i = 0; i < n; i++){
        ll a,b;
        cin>>a>>b;
        d[i] = {a, b, (ld)(b)/a};
        mx = max(mx, (ll)ceil((ld)(b+M)/(ld)a));
    }
    sort(d.begin(), d.end(), [&](auto a, auto b){
        return get<2>(a) < get<2>(b);
    });
    ll hi = mx;
    ll lo = 0;
    while(lo < hi){
        ll mid = (lo+hi)/2;
        if(check(mid)){
            hi = mid;
        }
        else{
            lo = mid+1;
        }
    }
    cout<<hi<<endl;
}

int main(){
	ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    //cin>>t;
    for(int i = 0; i < t; i++)
        solve(t);
}

