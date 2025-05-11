#include<iostream>
#include<cstring>
using namespace std ;

long add(long n) {
    int sum=n;
    bool ret=(n > 0) && ((sum += add(n-1)) > 0);
    return sum;
}
int main() {
  long n=0;
  scanf("%d",&n);
  long ans=add(n);
  printf("%d",ans);
}
