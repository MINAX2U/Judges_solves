#include <bits/stdc++.h>
using namespace std;

int main(){
  ios::sync_with_stdio(0);cin.tie(0);
  int a[4]={};
  int score=0;
  for(int i=0;i<4;i++){
    for(int j=0;j<4;j++){
      cin>>score;
      a[i]+=score;
    }
  }
  
  cout<<a[0]<<":"<<a[1]<<"\n"<<a[2]<<":"<<a[3]<<"\n";
  if(a[0]>a[1]&&a[2]>a[3]){
    cout<<"Win";
  }
  else if(a[0]<a[1]&&a[2]<a[3]){
    cout<<"Lose";
  }
  else{
    cout<<"Tie";
  }
  return 0;
}
