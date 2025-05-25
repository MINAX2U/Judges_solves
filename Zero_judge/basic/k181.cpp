#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    string id;
    cin >> id;
    int eights = 0;

    for (int i = 0; i < 10; i++)
    {
        if (id[i] == '8')
            eights++;
    }

    cout << id << " can get " << eights * 10 << "\% off.";
    return 0;
}