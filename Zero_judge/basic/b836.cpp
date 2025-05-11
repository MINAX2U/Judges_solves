#include <iostream>
using namespace std;

int main()
{
    long int n = 0;
    long int m = 0;
    while (cin >> n >> m)
    {
        if (m == 0)
        {
            cout << "Go Kevin!!\n";
        }
        else
        {
            if ((1 - n + m) % m == 0)
            {
                cout << "Go Kevin!!\n";
            }
            else
            {
                cout << "No Stop!!\n";
            }
        }
    }
    return 0;
}