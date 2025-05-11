#include <iostream>

using namespace std;

int main()
{
    int n, b = 0, c = 0, d = 0;
    cin >> n;
    while (n--)
    {
        int a;
        cin >> a;
        if (a % 3 == 0)
            b++;
        else if (a % 3 == 1)
            c++;
        else if (a % 3 == 2)
            d++;
    }
    cout << b << " " << c << " " << d << endl;
}