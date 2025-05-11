#include <iostream>

using namespace std;

int main()
{
    int Y1, Y2;
    cin >> Y1 >> Y2;
    int count;
    for (int i = Y1; i <= Y2; i++)
    {
        if ((i % 4 == 0 && i % 100 != 0) || (i % 400 == 0))
        {
            count++;
        }
    }
    cout << count;
    return EXIT_SUCCESS;
}