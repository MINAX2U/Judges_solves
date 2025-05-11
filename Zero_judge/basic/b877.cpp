#include <cstdio>

int main()
{
    short int a, b;
    scanf("%hd %hd", &a, &b);
    printf("%hd", (100 + b - a) % 100);
}
/*
用同餘法
*/