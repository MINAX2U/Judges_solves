#include <bits/stdc++.h>

using namespace std;

int main(){
  int A1,B1,C1,A2,B2,C2,n=0;
  int mx=-99999;
  cin>>A1>>B1>>C1>>A2>>B2>>C2>>n;
  for(int i=0;i<=n;i++){
    int j=n-i;
    int sum=(A1*i*i+B1*i+C1)+(A2*j*j+B2*j+C2);
    if(sum>mx)mx=sum;
  }

  cout<<mx;
}
