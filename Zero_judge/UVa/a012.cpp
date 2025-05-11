#include <iostream>

using namespace std;

int main()
{
    long long int a, b;
    while (cin >> a >> b)
    {
        if (a > b)
        {
            long long int tmp = a - b;
            cout << tmp << endl;
        }
        else
        {
            long long int tmp = b - a;
            cout << tmp << endl;
        }
    }
    return EXIT_SUCCESS;
}