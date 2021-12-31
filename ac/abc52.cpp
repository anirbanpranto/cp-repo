#include<bits/stdc++.h>
using ll = int64_t;
 
using namespace std;

const ll MOD = 1e9+7;

int main(){
	ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    vector<ll> fac(n+1);
    fac[0] = 0;
    fac[1] = 1;
    for(int i = 2; i <= n; i++){
        fac[i] = (i*fac[i-1])%MOD;
    }
    for(int i = 1; i <= fac[i-1]; i++){
        
    }
}

