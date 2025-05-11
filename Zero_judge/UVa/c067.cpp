#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 0, t = 1;
    while (cin >> n && n)
    {
        cout << "Set #" << t++ << "\n";
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        int avg = accumulate(v.begin(), v.end(), 0) / n;
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            ans += abs(avg - v[i]);
        }
        ans /= 2;
        cout << "The minimum number of moves is " << ans << ".\n";
    }
    return 0;
}