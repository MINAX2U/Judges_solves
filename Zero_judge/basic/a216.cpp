#include <bits/stdc++.h>

long long int f(long long int n){
    if(n==1)return 1;
    return n+f(n-1);
}
long long int g(long long int n){
    if(n==1)return 1;
    return f(n)+g(n-1);
}

int main(){
    long long int l=0;
    while(scanf("%lld",&l)==1){
        printf("%lld %lld\n",f(l),g(l));
    }
}