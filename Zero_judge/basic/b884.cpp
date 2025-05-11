#include <bits/stdc++.h>
using namespace std;

int yeef(int x,int y){
  return 100-(x+y);
}

int main(){
  int yee=0,n=0;
  cin>>n;
  for(int i=0;i<n;i++){
    int x=0,y=0;
    cin>>x>>y;
    yee=yeef(x,y);
    if(0<yee&&yee<=30){
      cout<<"sad!";
    }
    else if(30<yee&&yee<=60){
      cout<<"hmm~~";
    }
    else if(60<yee&&yee<100){
      cout<<"Happyyummy";
    }
    else{
      cout<<"evil!!";
    }
    cout<<"\n";
  }
}
