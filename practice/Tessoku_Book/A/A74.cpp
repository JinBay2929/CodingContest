
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
using namespace std;   


int n, p[109][109];
int x[109], y[109];


int main(){
  cin>>n;

  for(int i=1; i<=n; i++){
    for(int j=1; j<=n; j++){
      cin>>p[i][j];
    }
  }

  //行と列の並びは独立に管理できる。
  //xで行、yで列を管理。
  for(int i=1; i<=n; i++){
    for(int j=1; j<=n; j++){
      if(p[i][j]!=0){
        x[i]=p[i][j];
        y[j]=p[i][j];
      }
    }
  }

  //転倒数を数える。行と列の転倒数の和が最小の操作回数。
  int rx=0, ry=0;
  for(int i=1; i<=n-1; i++){
    for(int j=i+1; j<=n; j++){
      if(x[i]>x[j])rx++;
      if(y[i]>y[j])ry++;
    }
  }

  cout<<rx+ry<<endl;


  

  
  return 0;
}
    
 