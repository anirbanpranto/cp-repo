#include<bits/stdc++.h>
using ll = int64_t;
 
using namespace std;
using Graph = vector<vector<int>>;

void solve(int n){
    //write solution here
    vector<vector<bool>> g(n, vector<bool>(n, false));
    vector<int> ans;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            int x;
            cin>>x;
            if(x==1) g[i][j] = true;
            else g[i][j] = false;
        }
    }

    for(int i = 0; i < n; i++){
        char ok = 0;
        for(int j = 0; j < n; j++){
            if(g[i][j]==1){
                for(int k = 0; k < n; k++){
                    if(j!=k && g[i][k]==1){
                        if(g[j][k] && g[k][j]){
                            ok = 1;
                        }    
                    }
                }
            }
        }
        if(!ok){
            ans.push_back(i);
        }
    }

    for(int &x:ans){
        cout<<x<<" ";
    }
    cout<<endl;
}

int main(){
	ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    while(cin>>t && t!=-1)
        solve(t);
}

