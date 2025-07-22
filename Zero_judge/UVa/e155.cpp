#include<bits/stdc++.h>
using namespace std;

int n;

int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);
  while(cin>>n){
    if (n==0) break;
    queue<int> q;

    for(int i=1;i<=n;i++){
      q.push(i);
    }
    cout<<"Discarded cards:";
    for(int i =0;i<n-1;i++){
      if(i!=0)cout<<",";
      cout<<" "<<q.front();
      q.pop();
      q.push(q.front());
      q.pop();
    }
    cout<<"\nRemaining card: "<<q.front()<<"\n";
  }
}
