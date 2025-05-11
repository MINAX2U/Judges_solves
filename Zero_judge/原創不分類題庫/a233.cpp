#include <bits/stdc++.h>
using namespace std;

int main() {
    int n = 0;
    scanf("%d", &n);
    vector<int> v(n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &v[i]);
    }
    sort(v.begin(), v.end());
    for(auto i : v) {
        printf("%d ", i);
    }
    return 0;
}
