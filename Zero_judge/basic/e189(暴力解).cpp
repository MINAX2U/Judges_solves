#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n;
    while (cin >> n)
    {
        while (n > 0)
        {
            n -= 12;
        }
        if (n == -12 || n == -9 || n == -6 || n == -3 || n == 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}