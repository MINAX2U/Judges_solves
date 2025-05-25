#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    int N = 0;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        int M = 0;
        cin >> M;
        double sum = 0;
        for (int j = 0; j < M; j++)
        {
            double temp;
            cin >> temp;
            sum += temp;
        }
        double ans = sum / M;
        printf("%.2f\n", ans);
    }
    return 0;
}