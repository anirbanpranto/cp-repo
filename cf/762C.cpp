#include<bits/stdc++.h>
using ll = int64_t;
 
using namespace std;

void solve(){
    string a,f;
    cin>>a>>f;
    stack<ll> ans;
    stack<char> b;
    for(int i = 0; i < f.size(); i++){
        b.push(f[i]);
    }
    for(int i = a.size()-1; i >= 0; i--){
        if(b.empty()){
            cout<<-1<<endl;
            return;
        }
        string tt = "";
        tt += a[i];
        string tt2 = "";
        tt2 += b.top();
        int x = stoi(tt);
        if(!b.empty()){
            int y = stoi(tt2);
            if(x>y && b.size() >= 2){
                string s = "";
                s += b.top();
                b.pop();
                s = (b.top()+s);
                y = stoi(s);
            }
            if(!b.empty())
                b.pop();
            if(y-x >= 10 || y-x < 0){
                cout<<-1<<endl;
                return;
            }
            ans.push(y-x);
            //cout<<y<<" "<<x<<": "<<y-x<<endl;
        }
    }
    while(!b.empty()){
        string s = "";
        s += b.top();
        ans.push(stoi(s));
        b.pop();
    }

    while(!ans.empty() && ans.top() == 0){
        ans.pop();
    }

    while(!ans.empty()){
        ll x = ans.top();
        cout<<x;
        ans.pop();
    }
    cout<<endl;
}

int main(){
	ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--)
        solve();
}

