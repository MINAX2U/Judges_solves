#include <iostream>
#include <string>
using namespace std;
bool check_str(bool start)
{
    if (start)
    {
        cout << "``";
        return false;
    }
    else
    {
        cout << "''";
        return true;
    }
}

int main()
{
    cin.sync_with_stdio(0);
    cin.tie(0);
    string str;
    bool start = true;
    while (getline(cin, str))
    {
        for (int i = 0; i < str.length(); i++)
        {
            if (str[i] == '"')
            {
                start = check_str(start);
            }
            else
            {
                cout << str[i];
            }
        }
        cout << "\n";
    }
    return 0;
}