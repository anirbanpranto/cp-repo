#include<bits/stdc++.h>
using ll = int64_t;
 
using namespace std;
using Graph = vector<vector<int>>;

//square root of a number
double check(double x){
    //cout<<x<<endl;
    return x*x;
}

void solve(int kes){
    //write solution here
    double n;
    cin>>n;
    double lo = 0.0;
    double hi = n;
    //cout<<abs(lo-hi)<<endl;
    while(abs(lo-hi) >= 1e-6){
        double mid = (lo+hi)/2;
        if(check(mid) <= n){
            lo = mid;
        }
        else{
            hi = mid;
        }
    }
    cout<<lo<<endl;
}

int main(){
	ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    //cin>>t;
    for(int i = 0; i < t; i++)
        solve(t);
}

