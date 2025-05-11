#include <iostream>
using namespace std;

int main(){
    string s,conj="";
    cin >> conj;
    cin >> s;
    cout << s;
    while(cin>>s){
        cout<<" "<<conj<<" "<<s;
    }
}