#include <iostream>
#include <set>
#include <vector>
#include <algorithm>
using namespace std;

int n,L;
long long ans;
set <int> st;
vector <pair<int, int>>v;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n>>L;
    st.insert(0);   
    st.insert(L);
    for(int i=0,a,b;i<n;i++){
        cin>>a>>b;
        v.push_back({b,a});
    }

    sort(v.begin(),v.end());

    for(auto [i,x]:v){
        st.insert(x);
        auto it = st.lower_bound(x);//set<int>::iterator it = st.lower_bound(x);
        ans += (*next(it))-(*prev(it));
    }

    cout<<ans<<"\n";
}