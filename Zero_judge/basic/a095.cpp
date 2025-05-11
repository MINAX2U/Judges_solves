#include <cstdio>

int main(){
    int n,m=0;
    while (scanf("%d %d",&n,&m)==2){
        (n==m)?printf("%d\n",m):printf("%d\n",m+1);
    }
}