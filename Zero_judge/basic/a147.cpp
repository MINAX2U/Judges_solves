#include <bits/stdc++.h>
using namespace std;

int main(){
    int n=0;
    while(scanf("%d",&n)&&n!=0){
        if(n<0)continue;
        for(int i=1;i<n;i++){
            if(i%7!=0)printf("%d ",i);
        }
        printf("\n");
    }
}