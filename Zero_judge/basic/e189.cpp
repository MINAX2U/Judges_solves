#include <iostream>
using namespace std;

int main(){
    int N;
    while(cin >> N){
        while(N >= 3){
            N -= 3;
        }
        if(N == 0){
         cout <<"YES"<< endl;
        }
        else{
            cout << "NO"<< endl;
        }
    }
    return 0;
}