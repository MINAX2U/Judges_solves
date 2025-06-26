#include <iostream>
#include <string>
using namespace std;

string s;
int total;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin>>s;

    for(char c:s){
        total+=(c-'A'+1);
    }
    cout<<total<<"\n";
}