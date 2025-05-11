#include <iostream>
using namespace std;
bool isPrime(int number){

    if(number < 2) return false;
    if(number == 2) return true;
    if(number % 2 == 0) return false;
    for(int i=3; (i*i)<=number; i+=2){
        if(number % i == 0 ) return false;
    }
    return true;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n=0;
    while(cin>>n&&n!=0){
        (isPrime(n))?cout<<"0\n":cout<<"1\n";
    }
}