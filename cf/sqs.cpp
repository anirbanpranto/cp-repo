#include<bits/stdc++.h>
using ll = int64_t;
 
using namespace std;
 
int main(){
	ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll num;
    cin>>num;
    while(num>0){
        ll x = sqrt(num);
        cout<<x<<"^2"<<endl;
        num -= (x*x);
    }
    cout<<endl;    
}

