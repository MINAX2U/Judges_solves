#include <cstdio>

int main()
{
    short int a;
    scanf("%hd", &a);
    printf("%hd", (24+a-15)% 24);
}