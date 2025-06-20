#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll INF = (ll)4e18;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, K;
    cin >> N >> K;
    vector<ll> a(N+1), dp(N+1, INF);
    for(int i = 1; i <= N; i++){
        cin >> a[i];
    }
    dp[0] = 0;

    deque<int> dq;
    dq.push_back(0);  // 初始，把 dp[0] 的下標放進去

    for(int i = 1; i <= N; i++){
        // 1) 滑出左邊界：確保 dq.front() >= i-K
        while(!dq.empty() && dq.front() < i - K)
            dq.pop_front();

        // 2) 用窗口最小的 j 來更新 dp[i]
        dp[i] = dp[dq.front()] + a[i];

        // 3) 維持 deque 裡 dp 值單調增：把較大的都 pop
        while(!dq.empty() && dp[dq.back()] >= dp[i])
            dq.pop_back();
        dq.push_back(i);
    }

    // 答案：最後一次蓋在 [N-K+1..N] 的最小 dp
    ll ans = INF;
    for(int j = max(0, N-K+1); j <= N; j++){
        ans = min(ans, dp[j]);
    }
    cout << ans << "\n";
    return 0;
}
