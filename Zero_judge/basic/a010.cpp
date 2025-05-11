#include <iostream>
using namespace std;

// 因數分解次方版

int main()
{
    int n = 0, t = 0;
    cin >> n;
    if (n == 1)
    {
        cout << "1";
    }
    else
    {
        for (int i = 2; i <= n; i++)
        {
            if (n % i == 0)
            {
                while (n % i == 0)
                {
                    n /= i;
                    t += 1;
                }
                if (t > 1)
                {
                    cout << i << "^" << t;
                }
                else
                    cout << i;
                t = 0;
                if (n > 1)
                {
                    cout << " * ";
                }
            }
        }
    }
}