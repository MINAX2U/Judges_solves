#include <bits/stdc++.h>
using namespace std;

int main(){
  int n=0;
  cin>>n;
  for(int i=1;i<=n;i++){
    int x=0,y=0;
    cin>>x>>y;
    int tol=0;
    for(int j=x;j<=y;j++){
      if(j%2!=0){
        tol+=j;
      }
    }
    cout<<"Case "<<i<<": "<<tol<<"\n";
  }
  return 0;
}
