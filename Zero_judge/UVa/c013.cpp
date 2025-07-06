#include <bits/stdc++.h>
using namespace std;

int n,A,F,t;


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin>>n;
    
    for(int i=0;i<n;i++){
        cin>>A>>F;
        for(int j=0;j<F;j++){
            if(t)cout<<"\n";
            for(int k=1;k<=A;k++){
                for(int p=1;p<=k;p++)cout<<k;
                cout<<'\n';
            }
            for(int k=A-1;k>=1;k--){
                for(int p=1;p<=k;p++)cout<<k;
                cout<<'\n';
            }
            t++;
        }
    }


}