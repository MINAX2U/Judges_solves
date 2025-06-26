#include <stdio.h>
#include <math.h>
using namespace std;

int main(){
int n, count = 0;
while(scanf("%d",&n) != EOF){
if(n < 0) break;
int max = 0;
printf("Case %d:",++count);
for(int i=0;i<=14;i++){
if(pow(2,i) >= n){
max = i;
break;
}
}
printf(" %d",max);
printf("\n");
}
return 0 ;
}