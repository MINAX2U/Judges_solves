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
    int n=0;
    cin>>n;
    for(int i=0;i<n;i++){
        int tmp=0;
        cin>>tmp;
        (isPrime(tmp))?cout<<"Y\n":cout<<"N\n";
    }
}