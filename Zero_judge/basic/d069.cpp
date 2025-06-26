#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, c, e;
    cin>>e;
    for(c=0;c<e;c++){
    cin>>a;
    if(a%4==0&&a%100!=0||a%400==0)
    cout<<"a leap year"<<endl;
    else
    cout<<"a normal year"<<endl;
} 
}
  