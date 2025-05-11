#include <bits/stdc++.h>
using namespace std;

int main(){
    int n=0;
    while(scanf("%d",&n)==1&&n!=0){
        int count=0;
        while(n%2==1){
            ++count;
            n/=2;
        }
        printf("%d\n",count);
    }
}