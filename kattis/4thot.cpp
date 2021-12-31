#include<bits/stdc++.h>
using ll = int64_t;
 
using namespace std;

string pp(int k){
    switch(k){
        case 0:
            return " * ";
        case 1:
            return " + ";
        case 2:
            return " - ";
        case 3:
            return " / ";
    }
    return "";
}

int eval(string s){
    string pfx = "";
    stack<char> x;
    for(char c:s){
        if(c=='4'){
            pfx += c;
        }
        if(c=='*' || c=='/'){
            x.push(c);
        }
        if(c=='-' || c=='+'){
            while(!x.empty()){
                pfx+=x.top();
                x.pop();
            }
            x.push(c);
        }
    }
    while(!x.empty()){
        pfx += x.top();
        x.pop();
    }
    stack<int> ans;
    //cout<<pfx<<endl;
    int d;
    for(char c:pfx){
        if(c=='4') ans.push(4);
        else{
           int a = ans.top();
           //cout<<a<<endl;
           ans.pop();
           int b = ans.top();
           //cout<<b<<endl;
           ans.pop();
           if(c=='*') d = b*a;
           if(c=='+') d = b+a;
           if(c=='-') d = b-a;
           if(c=='/') d = b/a;
           ans.push(d);
        }
    }
    return ans.top();
}

map<int,string> ans;

void solve(int kes){
    //write solution here
        string x = "4";
        for(int j = 0; j < 4; j++){
            string y = x + pp(j) + "4";
            for(int k = 0; k < 4; k++){
                string z = y + pp(k) + "4";
                for(int l = 0; l < 4; l++){
                    string w = z + pp(l) + "4";
                    //cout<<w<<endl;
                    int res = 1;
                    if(w=="4 / 4 / 4 * 4") res = 0;
                    else if(w=="4 / 4 / 4 - 4") res = -4;
                    else{
                        res = eval(w);
                    }
                    string ff = w+" = "+to_string(res);
                    ans[res] = ff;
                }
            }
        }
}

int main(){
	ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    cin>>t;
    solve(t);
    for(int i = 0; i < t; i++){
        int n;
        cin>>n;
        if(n<-60 || n > 256 || ans.find(n) == ans.end()){
            cout<<"no solution"<<endl;
        }
        else{
            cout<<ans[n]<<endl;
        }
    }
}

