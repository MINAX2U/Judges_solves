#include <bits/stdc++.h>
using namespace std;

bool isPrime(int number){

    if(number < 2) return false;
    if(number == 2) return true;
    if(number % 2 == 0) return false;
    for(int i=3; (i*i)<=number; i+=2){
        if(number % i == 0 ) return false;
    }
    return true;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int num;
    while (cin >> num)
    {
        int ans = 0, OG = num;
        for (int i = 2; i <= (sqrt(OG))+1; i++)
        {
            if (num % i == 0)
            {
                while (num % i == 0 && num > 1)
                {
                    ans += i;
                    num /= i;
                }
            }
        }
        if (num != 1) ans += num;
        cout << ans << endl;
    }
}
