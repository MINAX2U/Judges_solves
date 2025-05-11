#include <iostream>

using namespace std;

int main(){
    int N; //how many times
    int r; // common ratio
    int d; //tolerance
    int num[5]; //array
    
    cin >> N;
    
    for(int i=0;i<N;i++){
        for(int j=0;j<4;j++){
            cin >> num[j];
        }
        if (num[1]-num[0] == num[2]-num[1]){
            d=num[1]-num[0];
            num[4] = num[3]+d;
            for(int k=0;k<5;k++){
            cout << num[k] << " ";
        }
        cout << endl;
        }
        else{
            r=num[1]/num[0];
            num[4] = num[3]*r;
            for(int k=0;k<5;k++){
            cout << num[k] << " ";
        }
        cout << endl;
        }
    }
    return EXIT_SUCCESS;
}