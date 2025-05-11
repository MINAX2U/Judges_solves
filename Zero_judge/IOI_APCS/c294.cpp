#include <iostream>
#include <algorithm>

using namespace std;
int main()
{
    int tri[3];
    for (int a = 0; a < 3; a++)
    {
        cin >> tri[a];
    }
    sort(tri, tri + 3);
    for (int a = 0; a < 3; a++)
    {
        if (a == 2)
        {
            cout << tri[2] << endl;
        }
        else
        {
            cout << tri[a];
            cout << ' ';
        }
    }
    if (tri[0] + tri[1] <= tri[2])
    {
        cout << "No";
    }
    else
    {
        if (tri[0] * tri[0] + tri[1] * tri[1] == tri[2] * tri[2])
        {
            cout << "Right";
        }
        if (tri[0] * tri[0] + tri[1] * tri[1] > tri[2] * tri[2])
        {
            cout << "Acute";
        }
        if (tri[0] * tri[0] + tri[1] * tri[1] < tri[2] * tri[2])
        {
            cout << "Obtuse";
        }
    }
}