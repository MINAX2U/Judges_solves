#include <bits/stdc++.h>
using namespace std;

int n;

int main(){
    cin>>n;
    int answer = 0+590*(n>=6)*(n<=11)+790*(n>=12)*(n<=17)+890*(n>=18)*(n<=59)+399*(n>=60);
    cout<< answer;
}