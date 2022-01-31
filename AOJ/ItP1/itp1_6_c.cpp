#include<iostream>

using namespace std;

int main(){
  int n, b, f, r, v;
  int population[4][3][10]; //[棟数1~4][階数1~3][部屋番号0~9]
  for(int i=0; i<4; i++){
    for(int j=0; j<3; j++){
      for(int k=0; k<10; k++){
        population[i][j][k]=0;
      }
    }
  }

  cin>>n;
  for(int i=0; i<n; i++){
    cin>>b>>f>>r>>v;
    population[b-1][f-1][r-1]+=v;
  }
  //i=0のときをわける
  for(int j=0; j<3; j++){
      for(int k=0; k<10; k++){
          cout<<" "<<population[0][j][k];
      }
      cout<<endl;
  }
  
  for(int i=1; i<4; i++){
      cout<<"####################"<<endl;
      for(int j=0; j<3; j++){
        for(int k=0; k<10; k++){
            cout<<" "<<population[i][j][k];
        }
        cout<<endl;
    }
  }
  return 0;
}