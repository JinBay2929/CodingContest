
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



int h, w, q, x[1509][1509], sum[1509][1509];
int a[100009], b[100009], c[100009], d[100009];
int ans;

int main(){
  cin>>h>>w;

  for(int i=1; i<=h; i++){
    for(int j=1; j<=w; j++){
      cin>>x[i][j];
    }
  }
  cin>>q;

  for(int i=1; i<=h; i++){
    for(int j=1; j<=w; j++){
      sum[i][j]=0;
    }
  }

  //横方向に和をとる
  for(int i=1; i<=h; i++){
    for(int j=1; j<=w; j++){
      if(j==1){
        sum[i][j]=x[i][j];
      }else{
        sum[i][j]=sum[i][j-1]+x[i][j];
      }
    }
  }

  //縦方向に和をとる
  for(int i=2; i<=h; i++){
    for(int j=1; j<=w; j++){
      sum[i][j]=sum[i-1][j]+sum[i][j];
    }
  }

  for(int i=1; i<=q; i++){
    cin>>a[i]>>b[i]>>c[i]>>d[i];
  }

  for(int i=1; i<=q; i++){
    ans=sum[c[i]][d[i]]-sum[c[i]][b[i]-1]
    -sum[a[i]-1][d[i]]+sum[a[i]-1][b[i]-1];
    cout<<ans<<endl;
  }

  return 0;
}
    

    
    
    
    
