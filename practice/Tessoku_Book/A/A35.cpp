
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


int n, a[100009];
int dp[2009][2009];

int main(){
  cin>>n;
  for(int i=1; i<=n; i++)cin>>a[i];


  for(int i=1; i<=n; i++){
    dp[n][i]=a[i];
  }

  //位置(i,j)での得点をdpで表す。奇数段は太郎、偶数段は次郎が操作。
  for(int i=n-1; i>=1; i--){
    for(int j=1; j<=i; j++){
      if(i%2==1){
        dp[i][j]=max(dp[i+1][j], dp[i+1][j+1]);
      }
      else{
        dp[i][j]=min(dp[i+1][j], dp[i+1][j+1]);
      }
    }
  }


  cout<<dp[1][1]<<endl;
  

  return 0;
}
    

