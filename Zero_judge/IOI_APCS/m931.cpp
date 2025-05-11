#include <bits/stdc++.h>
using namespace std;

int main(){
  ios::sync_with_stdio(0);cin.tie(0);
  int n,mx=0;
  int tmp=0;
  vector<vector<int>> v;
  cin>>n;
  v.resize(3,vector<int>(n));

  for(int i=0;i<n;i++){
    cin>>v[0][i]>>v[1][i];
    v[2][i]=(v[0][i])*(v[0][i])+(v[1][i])*(v[1][i]);
    if(v[2][i]>mx) mx=v[2][i],tmp=i;
  }

  v[2][tmp]=0;
  mx=0;
  tmp=0;
  for(int i=0;i<n;i++){
    if(v[2][i]>mx){
      mx=v[2][i];
      tmp=i;
    }
  }
  cout<<v[0][tmp]<<" "<<v[1][tmp];
}
