#include <bits/stdc++.h>
using namespace std;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);
  int n=0;
  cin>>n;
  int x=0,y=0,z=0;
  cin>>x>>y>>z;
  for(int i=n;i>0;i--){
    if(i!=x&&i!=y&&i!=z){
      cout<<"No. "<<i<<"\n";
    }
    else{
      continue;
    }
  }
  return 0;
}
