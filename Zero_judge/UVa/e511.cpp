#include <bits/stdc++.h>
using namespace std;

int main(){
  int n=0,t=0;
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>t;
    vector<int> v;
    v.clear();
    for(int j=0;j<t;j++){
      int tmp=0;
      cin>>tmp;
      v.push_back(tmp);
    }
    sort(v.begin(),v.end());
    cout<<(v[t-1]-v[0])*2<<"\n";
  }
  return 0;
}
