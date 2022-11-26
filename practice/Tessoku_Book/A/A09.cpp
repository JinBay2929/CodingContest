
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



int h, w, n;
//雪が降る範囲を+1, -1で管理する配列f
//sumで累積和を管理
int f[1509][1509], sum[1509][1509];
int a[100009], b[100009], c[100009], d[100009];


int main(){
  cin>>h>>w>>n;

  for(int i=1; i<=n; i++){
    cin>>a[i]>>b[i]>>c[i]>>d[i];
  }

  for(int i=1; i<=n; i++){
    f[a[i]][b[i]]+=1;
    f[c[i]+1][d[i]+1]+=1;
    f[a[i]][d[i]+1]-=1;
    f[c[i]+1][b[i]]-=1;
  }

  //横方向の和
  for(int i=1; i<=h; i++){
    for(int j=1; j<=w; j++){
      sum[i][j]=sum[i][j-1]+f[i][j];
    }
  }

  for(int i=1; i<=h; i++){
    for(int j=1; j<=w; j++){
      sum[i][j]=sum[i-1][j]+sum[i][j];
    }
  }


  for(int i=1; i<=h; i++){
    for(int j=1; j<=w; j++){
      cout<<sum[i][j];
      if(j!=w)cout<<" ";
      if(j==w)cout<<endl;
    }
  }

  return 0;
}
    

    
    
    
    
