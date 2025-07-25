#include <bits/stdc++.h>
using namespace std;

int N, K;
long long q;
vector<vector<pair<int, long long>>> adj;
vector<bool> vis;
int cnt=0;


void dfs(int u){
  vis[u]=true;
  for(auto [v, w]: adj[u]){
      if(!vis[v] && w >= q){
        cnt++;
        dfs(v);
      }
  }
}

int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cin>> N >> K >> q;

  adj.assign(N+1, {});
  vis.assign(N+1, false);

  for(int i=0;i<N-1;i++){
    int u, v;
    long long w;
    cin>>u>>v>>w;
    adj[u].emplace_back(v, w);
    adj[v].emplace_back(u, w)
  }

  dfs(K);
  cout<<cnt<<"\n";
}
