#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int a = 0;
        int b = 0;
        int c = 0;
        bool x = false;
        cin >> a >> b >> c;
        for (int j = a; j < b; j++)
        {
            if (j > a && j < b && (j % c) != 0)
            {
                cout << j << " ";
                x = true;
            }
        }
        if (x == false)
        {
            cout << "No free parking spaces.";
        }
        cout << endl;
    }
    return 0;
}