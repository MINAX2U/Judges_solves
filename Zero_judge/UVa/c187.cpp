#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll INF = LLONG_MAX / 4;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int TC;
    cin >> TC;
    for(int tc = 1; tc <= TC; tc++){
        int n, m, S, T;
        cin >> n >> m >> S >> T;

        vector<vector<pair<int,int>>> adj(n);
        for(int i = 0; i < m; i++){
            int u, v, w;
            cin >> u >> v >> w;
            adj[u].push_back({v, w});
            adj[v].push_back({u, w});
        }

        // Dijkstra
        vector<ll> dist(n, INF);
        priority_queue<pair<ll,int>, vector<pair<ll,int>>, greater<>> pq;
        dist[S] = 0;
        pq.push({0, S});

        while(!pq.empty()){
            auto [d, u] = pq.top(); pq.pop();
            if(d > dist[u]) continue;
            if(u == T) break;  // 提早停
            for(auto [v, w] : adj[u]){
                if(dist[v] > d + w){
                    dist[v] = d + w;
                    pq.push({dist[v], v});
                }
            }
        }

        cout << "Case #" << tc << ": ";
        if(dist[T] == INF) {
            cout << "unreachable\n";
        } else {
            cout << dist[T] << "\n";
        }
    }

    return 0;
}
