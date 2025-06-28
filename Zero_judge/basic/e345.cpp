#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    unsigned int n;
    while ( (cin >> n) ) {
        int dr;
        if (n == 0) dr = 0;
        else dr = 1 + (int)((n - 1) % 9);
        cout << dr << "\n";
    }
    return 0;
}
