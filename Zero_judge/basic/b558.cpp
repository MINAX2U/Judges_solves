#include <iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    int n=0;
    int a[500+1];
    a[1]=1;
    for(int k=2;k<=500;k++)a[k]=a[k-1]+(k-1);
    while(cin>>n)cout<<a[n]<<"\n";
}