#include <iostream>
using namespace std;

int main(){
    string a;
    cin >> a;
    int ans = 0;

    for(int i = 0; a[i]; i++){
        if(i%2) ans += a[i]-'0';
        else ans-= a[i]-'0';
    }
    ans = (ans>0)?ans:-ans;
    cout << ans;
    return 0;
}