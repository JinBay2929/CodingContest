
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


long long n, W, w[109], v[109];
long long dp[109][100009];
long long ans=0;

int main(){
  cin>>n>>W;

  for (int i = 1; i<=n;  i++)cin>>w[i]>>v[i];
 

  for(int j=0; j<=W; j++){
    dp[0][j]=0;
  }
  
  for(int i=1; i<=n; i++){
    for(int j=0; j<=W; j++){
      if(j>=w[i]){
        dp[i][j]=max(dp[i-1][j], dp[i-1][j-w[i]]+v[i]);
      }else{
        dp[i][j]=dp[i-1][j];
      }
    }
  }

  for(int j=0; j<=W; j++){
    ans=max(ans, dp[n][j]);
  }

  

  cout<<ans<<endl;
  return 0;
}

    
    
    
