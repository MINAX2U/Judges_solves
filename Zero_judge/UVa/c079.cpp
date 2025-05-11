#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N = 0, k = 0;
    while (cin >> N >> k)
    {
        int ans = 0, count = 0;
        while (true)
        {
            if (N > 0)
            {
                ans++;
                count++;
                N--;
            }
            else if (count >= k)
            {
                ans++;
                count -= k;
                count++;
            }
            else
                break;
        }
        cout << ans << "\n";
    }
}