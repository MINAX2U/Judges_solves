#include <iostream>
#include <math.h>

using namespace std;

int main(){
    int a,b,c;
    cin >> a >> b >> c;
    int x;
    x=b*b-4*a*c;
    if(x>0){
        int ans1=0;
        int ans2=0;
        ans1 = (-b+sqrt(x))/(2*a);
        ans2 = (-b-sqrt(x))/(2*a);
        cout << "Two different roots x1=" << ans1 <<" , x2=" << ans2;
    }
    else if(x==0){
        int ans1=0;
        ans1 = (-b+sqrt(x))/(2*a);
        cout << "Two same roots x=" << ans1 << endl;
    }
    else{
        cout << "No real root";
        cout << endl;
    }
    return EXIT_SUCCESS;
}