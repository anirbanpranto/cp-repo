#include<bits/stdc++.h>
using ll = int64_t;
 
using namespace std;
 
void solve(){
    vector<ll> nums(7);
    for(ll &x:nums)
        cin>>x;
    for(int i = 0; i < 6; i++){
        for(int j = 0; j < 6; j++){
            for(int k = 0; k < 6; k++){
                if(i!=j && j!=k && i!=k){
                    if(nums[i] + nums[j] + nums[k] == nums[6]){
                        cout<<nums[i]<<" "<<nums[j]<<" "<<nums[k]<<endl;
                        return;
                    }
                }
            }
        }
    }
}

int main(){
	ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--)
        solve();
}

