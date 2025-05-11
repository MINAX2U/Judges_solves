#include <bits/stdc++.h>
using namespace std;

int main(){
    int a;
    string b, c;
    cin >> a;
    cin >> b >> c;
    if (a == 30)
    {
        cout << "75%" << endl;
    }
    else if (a > 9999 && c != "AC")
    {
        cout << "30%" << endl;
    }
    else if (a < 1000)
    {
        cout << "0%" << endl;
    }
    else
    {
        cout << "100%" << endl;
    }
    return 0;
}
