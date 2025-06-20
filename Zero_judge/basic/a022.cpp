#include <iostream>
#include <string>
using namespace std;

string s;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> s;
    for(int i=0;i<(s.length()/2);i++){
        if(s[i]!=s[s.length()-1-i]){
            cout<<"no";
            return 0;
        }
    }
    cout<<"yes";
}