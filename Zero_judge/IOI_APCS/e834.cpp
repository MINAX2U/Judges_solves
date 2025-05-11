#include <bits/stdc++.h>
using namespace std;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);
  int M=0;
  cin>>M;
  int n=0;
  while(cin>>n&&n!=0){
    if(n%M!=0){
      cout<<M-(n%M)<<"\n";
    }
    else if(n%M==0){
      cout<<n/M<<"\n";
    }
  }
  return 0;
}
