
#include<bits/stdc++.h>
using namespace std;

int main(){
  int n=0,ans=0;
  cin>>n;
  for(int i=0;i<n;i++){
    int tmp=0;
    cin>>tmp;
    if (tmp>=10) {
      ans++;
    }
  }
  cout<<ans;
}
