#include <bits/stdc++.h>
using namespace std;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);
  int T=0;
  vector<int> v;
  cin>>T;
  for(int i=0;i<T;i++){
    long long unsigned int tmp=0,total=0;
    int ct=1;
    v.clear();
    while(cin>>tmp){
      if(tmp==0)break;
      else{
        v.push_back(tmp);
      }
    }
    sort(v.begin(),v.end());
    reverse(v.begin(),v.end());
    for(auto i:v){
      total+=2*pow(i,ct);
      ct++;
    }
    if(total>5000000){
      cout<<"Too expensive"<<"\n";
    }
    else{
      cout<<total<<"\n";
    }
  }
  return 0;
}
