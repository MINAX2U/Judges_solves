#include <iostream>

using namespace std;

int main(){
    int Y;
    while(cin>>Y){
        if( Y%4==0 && Y%100!=0 || Y%400==0){
            cout << "閏年" << endl;
        }
        else{
            cout << "平年" << endl;
        }
    }
    return EXIT_SUCCESS;
}