#include <stdio.h>
using namespace std;

int n,ans;

int main(){
    scanf("%d",&n);
    for(int i=1;i<=n;++i){
        if(i%2!=0){
            ans+=i;
        }
    }
    printf("%d",ans);
}