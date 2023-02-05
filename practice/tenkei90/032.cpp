
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

#include<cmath>
#include<map>
#include <stack>
#include <sstream>
#include<ctime>
#include<queue>
#include<set>
#include <cassert>
#include <numeric>
#include <functional>
#include <bitset>
#include <iomanip>

using namespace std;   

using ll=long long;
using ld=long double;
#define PI (ld)3.14159265358979


int n, m;
int a[19][19], x[109], y[109];
vector<int> junban; //選手名をvectorに入れる


int main(){
  cin>>n;

  for(int i=1; i<=n; i++){
    for(int j=1; j<=n; j++){
      cin>>a[i][j];
    }
  }
  cin>>m;
  for(int i=1; i<=m; i++)cin>>x[i]>>y[i];

  for(int i=1; i<=n; i++){
    junban.push_back(i);
  }

  int ans=20000;
  do{
    bool hantei=true;
    //隣接の判定をする
    for(int i=1; i<=m; i++){
      for(int k=0; k<=n-1; k++){
        if(k==0 && junban[k]==x[i]){
          if(junban[k+1]==y[i])hantei=false;
        }
        else if(k==n-1 && junban[k]==x[i]){
          if(junban[k-1]==y[i])hantei=false;
        }
        else if(junban[k]==x[i]){
          if(junban[k-1]==y[i] || junban[k+1]==y[i])hantei=false;
        }
      }
    }

    if(hantei){
      int tmp=0;
      for(int i=1; i<=n; i++){
        tmp+=a[junban[i-1]][i];
      }
      ans=min(ans, tmp);
    }
  }while(next_permutation(junban.begin(), junban.end()));


  if(ans==20000){
    cout<<-1<<endl;
  }
  else{
    cout<<ans<<endl;
  }

  return 0;
}
    
