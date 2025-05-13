#include <iostream>
#include <vector>
using namespace std;

int N;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>N;
    vector<int> Height(N);
    vector<int> Weight(N);
    
    for(int i=0;i<N;i++){
        cin>>Height[i];
    }
    for(int i=0;i<N;i++){
        cin>>Weight[i];
    }

    int min=1000000000, index=0;

    for(int i=0;i<N;i++){
        int product=Height[i]*Weight[i];
        if(product<min){
            index=i;
            min=product;
        }
    }
    cout<<Height[index]<<" "<<Weight[index];
}