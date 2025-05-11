#include<iostream>
using namespace std;

int main(){
    long int a,b,c,tmp=0;
    while(cin>>a>>b>>c){
    if(a>b&&a>c){
        tmp=b+c;
        if(b>c){
            (a>tmp)?cout<<"A\n":cout<<"B\n";
        }
        else{
            (a>tmp)?cout<<"A\n":cout<<"C\n";
        }
    }
    else if(b>c&&b>a){
        tmp=a+c;
        if(a>c){
            (b>tmp)?cout<<"B\n":cout<<"A\n";
        }
        else{
            (b>tmp)?cout<<"B\n":cout<<"C\n";
        }
    }
    else{
        tmp=a+b;
        if(a>b){
            (c>tmp)?cout<<"C\n":cout<<"A\n";
        }
        else{
            (c>tmp)?cout<<"C\n":cout<<"B\n";
        }
    }
    }
}