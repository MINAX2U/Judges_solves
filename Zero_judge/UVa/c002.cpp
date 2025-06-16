#include <bits/stdc++.h>
using namespace std;

int f91(int N){
    if(N>=101)return N-10;
    else if(N<=100){
        return f91(f91(N+11));
    }
}


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n=0;
    while(cin>>n){
        if(n==0)break;

        cout<<"f91("<<n<<")"<<" = "<<f91(n)<<"\n";
    }
}