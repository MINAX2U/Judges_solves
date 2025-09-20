#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    double a = 0;
    while (cin >> a)
    {
        double tmp = round(a * 5) / 10.0;
        cout << fixed << setprecision(1) << tmp << "\n";
    }
}
