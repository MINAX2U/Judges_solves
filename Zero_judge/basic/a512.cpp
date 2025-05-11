#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m = 0;
    while (cin >> n >> m)
    {
        int i = 0, tmp = 0;
        while (1)
        {
            tmp += n + i;
            i++;
            if (tmp > m)
                break;
        }
        cout << i << "\n";
    }
}