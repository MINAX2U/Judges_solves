#include <iostream>

using namespace std;

int main()
{
    int a, b;
    while (cin >> a >> b)
    {
        if (a == -1 && b == -1)
        {
            break;
        }
        else
        {
            if (a > b)
            {
                swap(a, b);
            }
            int x = b - a;
            int y = a - b + 100;
            cout << min(x, y) << endl;
        }
    }
    return EXIT_SUCCESS;
}

// Try +1 and -1 and compare which is smaller