#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int a1[100] = {};
    int n = 0;
    int sum = 0;

    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        cin >> a1[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (a1[i] == 0)
        {
            if (i == 0)
            {
                sum += a1[i + 1];
            }
            else if (i == n - 1)
            {
                sum += a1[i - 1];
            }
            else
            {
                if (a1[i - 1] < a1[i + 1])
                {
                    sum += a1[i - 1];
                }
                else
                {
                    sum += a1[i + 1];
                }
            }
        }
    }

    cout << sum;

    return 0;
}