
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

int n;
int lx[100009], ly[100009], rx[100009], ry[100009];
int d[1009][1009], sum[1009][1009];
int ans[100009];


int main(){
  cin>>n;
  for(int i=1; i<=n; i++){
    cin>>lx[i]>>ly[i]>>rx[i]>>ry[i];
  }

  for(int i=1; i<=n; i++){
    //(0,0)起点を1行1列にずらすため+1
    //左上が(a,b)ならばa+1行b+1列と考える
    d[lx[i]+1][ly[i]+1]+=1;
    d[rx[i]+1][ry[i]+1]+=1;

    d[lx[i]+1][ry[i]+1]-=1;
    d[rx[i]+1][ly[i]+1]-=1;
  }

  for(int i=1; i<=1005; i++){
    for(int j=1; j<=1005; j++){
      sum[i][j]+=sum[i][j-1]+d[i][j];
    }
  }

  for(int j=1; j<=1005; j++){
    for(int i=1; i<=1005; i++){
      sum[i][j]+=sum[i-1][j];
    }
  }

  
    for(int i=1; i<=1005; i++){
      for(int j=1; j<=1005; j++){
        ans[sum[i][j]]++;
      }
    }

    
  for(int k=1; k<=n; k++){
    cout<<ans[k]<<endl;
  }
  



  
 
  

  
  return 0;
}
    
