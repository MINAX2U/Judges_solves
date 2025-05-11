#include <bits/stdc++.h>
using namespace std;

int main(){
  ios::sync_with_stdio(0);cin.tie(0);
  int a=0,b=0,c=0;
  bool flag=false;
  cin>>a>>b>>c;
  if(a!=0)a=1;
  if(b!=0)b=1;
  if((a&&b)==c){
    cout<<"AND\n";
    flag=true;
  }
  if((a||b)==c){
    cout<<"OR\n";
    flag=true;
  }
  if((a!=b)==c){
    cout<<"XOR\n";
    flag=true;
  }
  if(!flag){
    cout<<"IMPOSSIBLE\n";
  }
  return 0;
}
