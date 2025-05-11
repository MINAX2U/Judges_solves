#include <bits/stdc++.h>
using namespace std;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);
  int n=0;
  cin>>n;
  int high=INT_MIN,T=0;
  int fail=0;
  for(int i=0;i<n;i++){
    int t=0,s=0;
    cin>>t>>s;
    if(s==-1){
      fail++;
    }
    else if(s>high){
      high=s;
      T=t;
    }
  }
  cout<<max(high-n-fail*2,0)<<" "<<T<<"\n";
}
