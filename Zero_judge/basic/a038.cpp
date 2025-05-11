#include <iostream>
#include <sstream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    stringstream sti;
    string str;
    long long int ans;
    cin >> str;
    reverse(str.begin(), str.end());
    sti << str;
    sti >> ans;

    cout << ans;

    return 0;
}