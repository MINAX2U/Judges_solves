#include <bits/stdc++.h>
using namespace std;

int main(){
  int y=0;
  cin>>y;
  if(!(y%4)&&(y%100)||!(y%400)){
    cout<<"a leap year";
  }
  else{
    cout<<"a normal year";
  }
  return 0;
}
