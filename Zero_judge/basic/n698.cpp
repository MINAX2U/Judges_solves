#include <iostream>

using namespace std;

int main()
{
    double R;
    cin >> R;
    if (R == 17.43)
    {
        cout << "0" << endl;
    }
    else if (R < 17.43 && R >= 17.00)
    {
        cout << "1" << endl;
    }
    else if (R < 17.00 && R >= 16.50)
    {
        cout << "3" << endl;
    }
    else if (R < 16.50 && R >= 16.00)
    {
        cout << "7" << endl;
    }
    else if (R < 16.00 && R >= 15.50)
    {
        cout << "10" << endl;
    }
    else if (R < 15.50 && R >= 15.00)
    {
        cout << "15" << endl;
    }
    else if (R < 15.00)
    {
        cout << "20" << endl;
    }
    return 0;
}