#include <bits/stdc++.h>
using namespace std;
int n;

void solve(int N) {
    string s;
    for (int i = 0; i < N; ++i) {
        s.push_back('0' + N - i);
    }
    do {
        cout << s << "\n";
    } while (next_permutation(s.begin(), s.end(), greater<char>()));
}

int main(){
    while(scanf("%d",&n)==1)solve(n);
}