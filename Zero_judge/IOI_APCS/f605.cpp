#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n=0,d=0,count=0,all=0;
    cin>>n>>d;
    int a[n][3];
    for(int i=0;i<n;i++){
        cin>>a[i][0]>>a[i][1]>>a[i][2];
    }
    for(int i=0;i<n;i++){
        if(abs(a[i][0] - a[i][1]) >= d || abs(a[i][0] - a[i][2]) >= d || abs(a[i][1] - a[i][2]) >= d){
            count++;
            all+=(a[i][0]+a[i][1]+a[i][2])/3;
        }
    }
    cout<<count<<" "<<all;
}