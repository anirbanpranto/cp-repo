#include<bits/stdc++.h>
using ll = int64_t;
 
using namespace std;
using Graph = vector<vector<int>>;

int n,m;
vector<vector<int>> p;

bool check(int x){
    //facts : n-1 shops means there must be one shop from which we must buy two gifts
    //if we are looking for value x, all shops must have at least value x and there must be two values of at least that much in each shop
    vector<bool> can(m);
    bool pair = false;
    for(int i = 0; i < n; i++){
        int c = 0;
        for(int j = 0; j < m; j++){
            if(p[i][j] >= x){
                can[j] = true;
                c++;
            }
        }
        if(c>1) pair = true;
    }
    //corner case if m=1, there will be no pair
    if(!pair && m > 1) return false;
    bool ans = true;
    for(bool b:can){
        ans = ans && b;
    }
    return ans;
}

void solve(int kes){
    //write solution here
    cin>>n>>m;
    p.assign(n, vector<int>(m));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin>>p[i][j];
        }
    }
    int l = 1, r = 1e9+7;
    while(r-l > 1){
        int mid = (l+r)/2;
        if(check(mid)){
            l = mid;
        }
        else{
            r = mid;
        }
    }
    cout<<l<<endl;
}

int main(){
	ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    cin>>t;
    for(int i = 0; i < t; i++){
        solve(t);
    }
}

