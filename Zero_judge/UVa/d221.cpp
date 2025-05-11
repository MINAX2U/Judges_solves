#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n=0;
    while(cin>>n){
        if(!n) break;
        priority_queue<int,vector<int>,greater<int>>digits; //原本是由大排到小打這樣變成由小排到大
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            digits.push(x);
        }
        long long cost=0;
        while(digits.size()>1){
            int a=digits.top();
            digits.pop();
            int b=digits.top();
            digits.pop();
            cost+=(a+b);
            digits.push(a+b);
        }
        cout<<cost<<"\n";
    }
}