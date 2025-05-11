#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int n, ct = 0;
    cin >> n;
    cin.ignore();  // This consumes the leftover newline character after cin >> n
    
    string s;
    for (int i = 0; i < n; i++) {
        getline(cin, s);  // Reading the entire line
        string::size_type idx = s.find("商店");
        if (idx != string::npos) {
            ++ct;
        }
    }
    
    cout << ct;
    return 0;
}
