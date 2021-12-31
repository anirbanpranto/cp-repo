#include<bits/stdc++.h>
using ll = int64_t;
 
using namespace std;
using Graph = vector<vector<int>>;

int h,k;
char dp[1000];
int ans = 0;

void backtrack(int total_k, int total_h int curr_dem, int val){
    if(total_k > k) return;
    if(total_h > h) return;
    if(total_k<=k){
        ans = max(ans, val);
        return;
    }
    dp[curr_dem] = 1;
    if(!dp[val - curr_dem]) total_k++;
    backtrack(total_k, total_h+1, 

}

void solve(int kes){
    //write solution here
    while(cin>>a>>b){
        if(a==0 && b==0) return;
        cin>>h>>k;
        ans = 0;
        memset(dp, 0, sizeof(dp));
        backtrack(0, 0, 0, 1); //stamps taken, current denominator, target
    }
}

int main(){
	ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    //cin>>t;
    for(int i = 0; i < t; i++)
        solve(t);
}

