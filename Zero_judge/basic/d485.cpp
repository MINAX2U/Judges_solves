#include<stdio.h>
using namespace std;

long long int a,b;

int main(){
    scanf("%lld%lld",&a,&b);
    printf("%lld",b/2-(a+1)/2+1);
}