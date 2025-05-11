#include <stdio.h>
using namespace std;

int main()
{
    int n = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        int s = 0;
        long long a, b = 0;
        scanf("%d %lld %lld", &s, &a, &b);
        switch (s)
        {
        case 1:
            printf("%lld\n", a + b);
            break;
        case 2:
            printf("%lld\n", a - b);
            break;
        case 3:
            printf("%lld\n", a * b);
            break;
        case 4:
            printf("%lld\n", a / b);
            break;
        }
        printf("\n");
    }
}