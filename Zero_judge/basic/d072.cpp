#include <bits/stdc++.h>
using namespace std;

int main(){
  int n=0;
  cin>>n;
  for(int i=1;i<=n;i++){
    int y=0;
    cin>>y;
    if(!(y%4)&&(y%100)||!(y%400)){
    cout<<"Case "<<i<<": a leap year"<<"\n";
    }
    else{
    cout<<"Case "<<i<<": a normal year"<<"\n";
    }
  }
}
