#include <bits/stdc++.h>
using namespace std;

int main(){
  ios::sync_with_stdio(0);cin.tie(0);
  int n=0;
  while(cin>>n){
    vector<int> v(n);
    for(int i=0;i<n;i++){
      cin>>v[i];
    }
    sort(v.begin(),v.end());
    for(int j=0;j<n;j++){
      cout<<v[j]<<" ";
    }
    cout<<"\n";
  }
  return 0;
}
