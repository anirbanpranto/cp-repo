#include<bits/stdc++.h>
using ll = int64_t;
 
using namespace std;
using Graph = vector<vector<int>>;

void solve(int kes){
    //write solution here
    int n;
    cin>>n;
    vector<int> a(n);
    vector<bool> mods(1e6+7, false);
    for(int i = 0; i < n; i++){
        cin>>a[i];
    }
    sort(a.begin(), a.end());
    int lim = n/2;
    int cc = 0;
    int m1 = *min_element(a.begin(), a.end());
    for(int i = 0; i < n; i++){
        cout<<"mod : "<<a[i]%m1<<endl;
        if(!mods[m1%a[i]]){
            cout<<m1<<" "<<a[i]<<endl;
            mods[m1%a[i]] = true;
            cc++;
        }
    }
}

int main(){
	ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    cin>>t;
    for(int i = 0; i < t; i++)
        solve(t);
}

