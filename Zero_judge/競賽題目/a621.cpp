#include <bits/stdc++.h>
using namespace std;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);
  int n=0;
  cin>>n;
  for(int i=0;i<n+1;i++){
    cout<<setprecision(10000)<<"2^"<<i<<" = "<<pow(2,i)<<"\n";
  }
}
