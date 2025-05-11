#include <bits/stdc++.h>
using namespace std;

int main(){
    int a1,b1,c1,a2,b2,c2;
    scanf("%d%d%d%d%d%d",&a1,&b1,&c1,&a2,&b2,&c2);
    int deltax,deltay,delta;
    float x, y;
    deltax=c1*b2-c2*b1;
    deltay=a1*c2-a2*c1;
    delta=a1*b2-a2*b1;
    if(delta!=0){
        x=(float)deltax/delta;
        y=(float)deltay/delta;
        printf("x=%.2f\ny=%.2f",x,y);
    }
    else{
        if(deltax==0&&deltay==0){
            printf("Too many\n");
        }
        else{
            printf("No answer\n");
        }
    }
}

//克萊姆公式