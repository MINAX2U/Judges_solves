#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string str;
        int num = 1;
        cin >> str;
        for (int j = 0; j < str.length(); j++)
        {
            num *= int(str[j] - '0');
        }
        cout << num << "\n";
    }
}