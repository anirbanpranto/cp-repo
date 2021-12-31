#include<bits/stdc++.h>
using ll = int64_t;
using ld = long double;
 
using namespace std;
using Graph = vector<vector<int>>;

ld eps = 1e-6;

ld possible(ld x){
    return (ld)pow(x,x);
}

void solve(int kes){
    //write solution here
    ld n;
    cin>>n;
    ld hi = n;
    ld lo = 0.0;
    while(abs(hi-lo) > eps){
        ld mid = (lo+hi)/2.0;
        if(possible(mid) <= n){
            lo = mid;
        }
        else{
            hi = mid;
        }
    }
    printf("%0.10Lf\n",lo);
}

int main(){
	ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    //cin>>t;
    for(int i = 0; i < t; i++)
        solve(t);
}

