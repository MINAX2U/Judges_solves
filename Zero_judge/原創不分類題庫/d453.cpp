#include <bits/stdc++.h>
using namespace std;

map <char, vector<pair<char, int>>> mp;
char start;

int f(int start, int total){
  if(!mp.count(start))return total;

  int maxi = 0;

  for(pair<char, int> p:mp[start]){
    maxi = max(f(p.first, total+p.second), maxi);
  }

  return maxi;
}




int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);
  int num;
  while(cin>>start>>num){
    mp.clear();

    char a, b;
    int n;

    for(int i=0;i<num;i++){
      cin>>a>>b>>n;
      mp[a].push_back({b, n});
    }

    cout << f(start, 0) <<"\n";
  }
}
