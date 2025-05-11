#include<bits/stdc++.h>
using namespace std;

int n=0;

bool IsInt(float x){
  if(x-(int)x==0)return 0;
  return 1;
}

int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);
  cin>>n;
  for(int i=0;i<n;i++){
    int a=0,b=0,c=0;
    cin>>a>>b>>c;
    if(a==0){
      cout<<"No"<<"\n";
      break;
    }
    double tmp=(b*b-4*a*c);
    bool Yes=IsInt(sqrt(tmp));
    if(!Yes){
      cout<<"Yes"<<"\n";
    }
    else if(Yes){
      cout<<"No"<<"\n";
    }
  }
  return 0;
}
