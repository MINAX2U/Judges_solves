#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    string str;
    cin>>str;
    while (str.length()>1){
        cout<<str<<"\n";
        str.pop_back();
    }
    cout<<str;
}