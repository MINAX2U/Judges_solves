#include <stdio.h>
inline int read(int *num)
{
    *num = 0;
    char c = getchar_unlocked(); // Fucking windows thinks it's unsafe so it's normal
    if (c == EOF)
        return EOF;
    while ('0' <= c && c <= '9')
    {
        *num = *num * 10 + (c - '0');
        c = getchar_unlocked();
    }
    return 1;
}

int main()
{
    int g, c;
    long long int TotalScore = 0, TotalCredit = 0;
    while (read(&g) != EOF && read(&c) != EOF)
    {
        TotalScore += g * c;
        TotalCredit += c;
    }
    if ((TotalScore / TotalCredit) >= 60)
    {
        puts("Oh wow! You pass it!\n");
        printf("%lld\n", TotalScore / TotalCredit);
    }
    else
        puts("YEEEEEE!!!");
    return 0;
}