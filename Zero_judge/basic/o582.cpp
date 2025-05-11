#include <bits/stdc++.h>
using namespace std;

int main(){
  ios::sync_with_stdio(0);cin.tie(0);
  int tmp=0,score=0;
  cin>>tmp;
  score+=tmp*3;
  cin>>tmp;
  score+=tmp*2;
  cin>>tmp;
  score+=tmp;
  cout<<score;
  return 0;
}
