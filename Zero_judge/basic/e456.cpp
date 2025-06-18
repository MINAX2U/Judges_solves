#include <bits/stdc++.h>
using namespace std;

string s;

int main(){
    getline(cin,s);
    int l=s.length();
    for(int i=0;i<l;i++){
        if(i>0&&s[i-1]==' ')cout<<", ";
        cout<<s[i];
        if(s[i]==' ')cout<<"little";
    }
    cout<<" little Indians\n";
}