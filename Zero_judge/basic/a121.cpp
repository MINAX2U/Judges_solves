#include <bits/stdc++.h>
using namespace std;

bool isPrime(int number)
{

    if (number < 2)
        return false;
    if (number == 2)
        return true;
    if (number % 2 == 0)
        return false;
    for (int i = 3; (i * i) <= number; i += 2)
    {
        if (number % i == 0)
            return false;
    }
    return true;
}

int main()
{
    int a, b = 0;
    while (scanf("%d %d", &a, &b) == 2)
    {
        long long int ans = 0;
        for (int i = a; i <= b; i++)
        {
            (isPrime(i)) ? ans++ : 1;
        }
        printf("%lld\n", ans);
    }
}