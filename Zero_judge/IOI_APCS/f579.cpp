#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    int people;
    cin>>people;
    int anum=0,bnum=0;
    int total=0,store=1000;

    for(int c=0;c<people;c++){
        while(store!=0){
            cin>>store;
            if(store==a)anum+=1;

            else if(store==(-1)*a)anum-=1;

            else if(store==b)bnum+=1;

            else if(store==(-1)*b)bnum-=1;
        }
        if(bnum>0&&anum>0)total+=1;
        anum=0;
        bnum=0;
        store=1000;
    }
    cout<<total;
}
