#include <bits/stdc++.h>
using namespace std;

int main(){
  int a=0,b=0,c=0;
  cin>>a>>b>>c;
  if(a==0&&b==0){
    if(c==0)printf("AND\nOR\nXOR");
    else if(c==1){
      printf("IMPOSSIBLE");
    }
  }
  else if(a!=0&&b==0){
    if(c==0){
      printf("AND");
    }
    else if(c==1){
      printf("OR\nXOR");
    }
  }
  else if(a==0&&b!=0){
    if(c==0){
      printf("AND");
    }
    else if(c==1){
      printf("OR\nXOR");
    }
  }
  else if(a!=0&&b!=0){
    if(c==0){
      printf("XOR");
    }
    else if(c==1){
      printf("AND\nOR");
    }
  }
  return 0;
}
