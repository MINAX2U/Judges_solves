#include <bits/stdc++.h>
using namespace std;

int main(){
  int n=0,f=0;
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>f;
    long long int tol=0;
    for(int j=0;j<f;j++){
      long long int a=0,b=0,c=0;
      cin>>a>>b>>c;
      tol+=a*c;
    }
    cout<<tol<<"\n";
  }
}
