#include <iostream>
#include <string>
#include <vector>
using namespace std;

int n;

void solve(){
    vector<string> sv(10);
    vector<int> iv(10);
    int mx=0;
    for(int i=0;i<10;++i){
        cin>>sv[i]>>iv[i];
        mx=max(mx,iv[i]);
    }
    for(int i=0;i<10;++i){
        if(mx==iv[i]){
            cout<<sv[i]<<"\n";
        }
    }
}


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin>>n;
    for(int i=1;i<=n;++i){
        cout<<"Case #"<<i<<":\n";
        solve();
    }
}
