#include <bits/stdc++.h>
using namespace std;

const int MAX_N = 50005;  // Adjust the size according to input constraints
int people[MAX_N];
bool vis[MAX_N];
int group = 0;

void dfs(int i){
    if(vis[i]) return;        // Return if already visited
    vis[i] = true;            // Mark current node as visited
    dfs(people[i]);           // Continue DFS to the next node
}

signed main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    memset(vis, 0, sizeof(vis));  // Initialize the visited array
    int n;
    cin >> n;                     // Read the number of people
    
    for(int i = 0; i < n; i++)    // Read the array of people connections
        cin >> people[i];

    for(int i = 0; i < n; i++){
        if(!vis[i]){              // If the current person is not visited
            dfs(i);               // Start a DFS traversal from person i
            group++;              // Increment group count when DFS finishes
        }
    }
    
    cout << group << '\n';         // Output the number of groups
    return 0;
}
