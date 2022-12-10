
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

int n, m;
int a[109][1030], dp[109][1030];

int main(){
  cin>>n>>m;
  for(int i=1; i<=m; i++){
    for(int j=1; j<=n; j++){
      cin>>a[i][j];
    }
  }

  for(int i=0; i<=m; i++){
    for(int j=0; j<(1<<n); j++){
      if(j==0)dp[i][j]=0;
      else{
        dp[i][j]=100000;  
      }
    }
  }

  for(int i=1; i<=m; i++){
    for(int j=0; j<(1<<n); j++){
      // already[k] = 1 のとき、品物 k は既に無料になっている
      //jは0から2**n-1まで試すので特に序盤は商品が選択しえないケースもおおい。
      //この場では今商品が選択されてるか否かではなく「もしクーポンを選択したら」という場合について考えてる。
      int already[12];

      //j表記から商品が選択されてるか否かの配列alreadyに変換
      for(int k=1; k<=n; k++){
        if(j/(1<<(k-1)) % 2==0)already[k]=0;
        else{
          already[k]=1;
        }
      }

      //選択したか否かを数値vに戻す
      int v=0;
      for(int k=1; k<=n; k++){
        if(already[k]==1 || a[i][k]==1)v+=(1<<(k-1));
      }

      dp[i][j]=min(dp[i][j], dp[i-1][j]);
      dp[i][v]=min(dp[i][v], dp[i-1][j]+1);
    }
  }

  if(dp[m][(1<<n)-1]==100000)cout<<"-1"<<endl;
  else{
    cout<<dp[m][(1<<n)-1]<<endl;
  }
  
  return 0;
}
    
