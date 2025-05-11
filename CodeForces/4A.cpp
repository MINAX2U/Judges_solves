#include <cstdio>
using namespace std;

int w;

int main(){
    scanf("%d",&w);
    if(w>2&&w%2==0){
        printf("YES");
    }else{
        printf("NO");
    }
}