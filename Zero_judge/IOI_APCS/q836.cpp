#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int health=0;
    int gap1=0,gap2=0;
    int dmg1=0, dmg2=0;

    cin>>health>>gap1>>dmg1>>gap2>>dmg2;

    int pos=0;

    while(health>0){
        pos+=health;

        if(pos%gap1==0)health-=dmg1;
        if(pos%gap2==0)health-=dmg2;
    }

    cout<<pos;

}