#include <bits/stdc++.h>
using namespace std;

int main(){
  int n=0;
  while(cin>>n){
    int sum=0;
    for(int i=1;i<n;i++){
      if(n%i==0)sum+=i;
    }
    if(sum>n)cout<<"盈數";
    else if(sum<n)cout<<"虧數";
    else if(sum==n)cout<<"完全數";
    cout<<"\n";
  }
  return 0;
}
