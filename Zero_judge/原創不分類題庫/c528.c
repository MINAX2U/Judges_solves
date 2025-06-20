#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

typedef long long ll;
#define INF 0x3f3f3f3f3f3f3f3fLL

int main(){
    int N, K;
    if (scanf("%d %d", &N, &K) != 2) return 0;

    ll *a  = malloc(sizeof(ll)*(N+1));
    ll *dp = malloc(sizeof(ll)*(N+1));
    for(int i = 1; i <= N; i++){
        scanf("%lld", &a[i]);
        dp[i] = INF;
    }
    dp[0] = 0;

    // 用來存 j 的下標，保證 dp[dq[0]] 是窗口最小
    int *dq = malloc(sizeof(int)*(N+1));
    int head = 0, tail = 0;
    dq[tail++] = 0;  // 初始只放 dp[0]

    for(int i = 1; i <= N; i++){
        // 1) 跳出左邊界：若 dq[head] < i-K 就 pop_front
        while(head<tail && dq[head] < i - K) head++;

        // 2) dq[head] 現在是最小的 j
        dp[i] = dp[dq[head]] + a[i];

        // 3) 維護單調：把所有 dp[dq.back] >= dp[i] 的都 pop_back
        while(head<tail && dp[dq[tail-1]] >= dp[i]) tail--;
        dq[tail++] = i;
    }

    // 答案 = 最後一次蓋在 [N-K+1..N] 的最小 dp
    ll ans = INF;
    for(int j = N-K+1; j <= N; j++){
        if (j >= 0 && dp[j] < ans) ans = dp[j];
    }
    printf("%lld\n", ans);

    free(a);
    free(dp);
    free(dq);
    return 0;
}
