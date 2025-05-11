#include <iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    int x=0,y=0,z=0;
    cin>>x>>y>>z;
    cout<<max(x,max(y,z))<<"\n";
    return 0;
}