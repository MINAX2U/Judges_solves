#include <bits/stdc++.h>
using namespace std;

int n,D,x,y,t;
int profit;
bool own;


int main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    cin>>n>>D;

    cin>>x;
    own=true;
    for(int i=0;i<n-1;i++){
        cin>>y;
        if(own==1&&y>=x+D){
            own=0;
            profit+=y-x;
            x=y;
        }
        if(own==0&&y<=x-D){
            own=1;
            x=y;
        }
    }
    cout<<profit<<'\n';
}