#include <cstdio>
#include <cmath>

int main(){
    long long int a,b,c,s=0;
    scanf("%lld %lld %lld",&a,&b,&c);
    s=(a+b+c)/2;
    printf("%lld",(s*(s-a)*(s-b)*(s-c)));
}