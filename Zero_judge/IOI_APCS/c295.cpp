#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
  ios::sync_with_stdio(0);cin.tie(0);
  int n=0,m=0;
  vector <int> v1;
  cin>>n>>m;
  int ans=0;
  for(int i=0;i<n;i++){
    int k=0;
    for(int j=0;j<m;j++){
      int t;
      cin>>t;
      k=max(k,t);
    }
    v1.push_back(k);
    ans+=k;
  }

  cout<<ans<<"\n";
  vector<int> r;
  for(int i=0;i<v1.size();i++)if(ans%v1[i]==0) r.push_back(v1[i]);
  if(r.size()==0){
    cout<<-1;
    return 0;
  }
  for(int i=0;i<r.size()-1;i++)cout<<r[i]<<" ";
  cout<<r[r.size()-1];
  return 0;
}
