#include <iostream>
using namespace std;

int f(int n) {
    if (n == 0 || n == 1) return 1;
    return n * f(n - 1);
}

int C(int n,int m){
  return f(n)/(f(m)*f(n-m));
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int m = 0, n = 0;
    while (cin >> n >> m) {
        
        int ans=C(n,m);
        cout << ans << "\n";
    }
    
    return 0;
}
