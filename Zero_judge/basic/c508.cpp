#include <bits/stdc++.h>
using namespace std;

void print(vector<int> &v){
    for(auto i:v){
        cout<<i<<" ";
    }
    cout<<"\n";
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n=0;
    set<int> st;
    multiset<int> stm;
    cin>>n;
    for(int i=0;i<n;i++){
        int tmp=0;
        cin>>tmp;
        st.insert(tmp);
        stm.insert(tmp);
    }
    for (auto it=stm.begin(); it != stm.end(); it++)     
    cout <<*it<<" ";
    cout <<"\n";
    for (auto rit=st.rbegin(); rit != st.rend(); rit++)     
    cout << *rit<<" ";
}