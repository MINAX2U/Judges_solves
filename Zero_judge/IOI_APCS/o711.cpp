#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, i, w1, w2, h1, h2, total = 0, prev = 0, curr = 0, imax = 0, water;
    scanf("%d", &n);
    scanf("%d%d%d%d", &w1, &w2, &h1, &h2);
    int low = w1 * w1 * h1;
    int full = low + w2 * w2 * h2;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &water);
        total += water;
        if (total <= low)
        {
            curr = total / (w1 * w1);
        }
        else if (total <= full)
        {
            curr = h1 + (total - low) / (w2 * w2);
        }
        else
        {
            curr = h1 + h2;
        }
        if (curr - prev > imax)
            imax = curr - prev;
        prev = curr;
    }
    printf("%d\n", imax);
    return 0;
}
