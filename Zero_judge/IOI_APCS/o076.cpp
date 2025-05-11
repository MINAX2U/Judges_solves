#include <iostream>
using namespace std;

int main()
{
    int n,k,h,lh,max=0,tmp=1;
    cin >>n>>lh;
    for(int i=0;i<n-1;i++){
        cin >> h;
        if(h > lh){
            tmp=1;
        }
        else{
            tmp++;
        }
        if(tmp>max){
            max = tmp;
        }
        
        lh=h;
    }
    cout << max;
}
