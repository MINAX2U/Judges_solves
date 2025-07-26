#include <bits/stdc++.h>
using namespace std;

const int dx[4] = {0, 0, 1, -1};
const int dy[4] = {1, -1, 0, 0};

int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int T;
  cin>>T;
  while(T--){
    int n, m, sx, sy, ex, ey;
    cin>>n>>m>>sx>>sy>>ex>>ey;

    sx--,sy--,ex--,ey--;

    vector<string> grid(n);
    for(int i=0;i<n;++i){
      cin>>grid[i];
    }

    vector<vector<int>> dist(n, vector<int>(m, -1));
    queue<pair<int, int>> q;
    q.push({sx, sy});
    dist[sx][sy] = 0;

    while(!q.empty()){
      auto [x,y] = q.front(); q.pop();

      for(int i=0; i<4; ++i){
        int nx = x + dx[i];
        int ny = y + dy[i];

        if(nx >= 0 && nx < n && ny >= 0 && ny < m && grid[nx][ny] == '0' && dist[nx][ny] == -1){
          dist[nx][ny] = dist[x][y] + 1;
          q.push({nx, ny});
        }
      }
    }
    if(dist[ex][ey] == -1) cout << "0\n";
    else cout<<dist[ex][ey]+1<<"\n";//因為包含起點所以+1
  }
}
