#include <bits/stdc++.h>
using namespace std;

int main(){
  ios::sync_with_stdio(0);cin.tie(0);
  int h1=0,m1=0,h2=0,m2=0;
  while(cin>>h1>>m1>>h2>>m2){
    if(h1==0&&m1==0&&h2==0&&m2==0){
      break;
    }
    int ans=h2*60+m2-h1*60-m1;
    if(ans<0)ans+=1440;
    cout<<ans<<"\n";
  }
  return 0;
}
