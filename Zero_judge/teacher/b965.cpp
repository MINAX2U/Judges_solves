#include <iostream>
#define L 10
using namespace std;
int B[L][L];
int R,C,N;
int order[L];


void un_spin(int x){
  int X[L][L];
  for(int i=0;i<R;i++){
    for(int j=0; j<C; j++){
      X[i][j] = B[i][j];
    }
  }
  for(int i=0; i<R;i++){
    for(int j=0; j<C; j++){
      B[C-1-j][i]=X[i][j];
    }
  }
  swap(R, C);
}

void un_flip(){
  int X[L][L];
  for(int i=0;i<R;i++)
    for(int j=0;j<C;j++)
      X[R-i-1][j]=B[i][j];
  for(int i=0;i<R;i++)
    for(int j=0;j<C;j++)
      B[i][j]=X[i][j];
  
}


int main(){
  while(cin>>R>>C>>N){
  int x[L][L];

  for(int i=0;i<R;i++)for(int j=0;j<C;j++)cin>>B[i][j];

  for(int i=0;i<N;i++)cin>>order[i];

  for(int i=N-1;i>=0;i--){
    if(order[i]==0)un_spin();
    else un_flip();
  }
  cout<<R<<" "<<C<<"\n";
  for(int i=0;j<R;j++){
    for(int j=0;j<C;j++){
      cout<<B[i][j]<<" ";
    }
  }
  return 0;
}
