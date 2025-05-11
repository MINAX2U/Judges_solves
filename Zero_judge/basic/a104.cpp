#include <bits/stdc++.h>
using namespace std;

int main() {
    short unsigned int n = 0;
    while (scanf("%hu",&n)==1) {
        std::vector<int> v(n);
        for (int i = 0; i < n; i++) {
            scanf("%d",&v[i]);
        }
        sort(v.begin(),v.end());
        for (int i : v){
            printf("%d ",i);
        }
        printf("\n");
    }
}