#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int num = 0;
    cin >> num;
    cout << (num / 12 * 50) + (num % 12 * 5);
    return 0;
}