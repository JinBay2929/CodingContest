
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

int n, a[100009], b[100009], ans;
int dp[100009];

int main(){
  cin>>n;
  for(int i=1; i<=n-1; i++)cin>>a[i];
  for(int i=1; i<=n-1; i++)cin>>b[i];

  dp[1]=0;
  //初期化しないとmaxがバグる
  for(int i=2; i<=n; i++){
    dp[i]=-10000000;
  }
  for(int i=1; i<=n-1; i++){
    dp[a[i]]=max(dp[i]+100, dp[a[i]]); 
    dp[b[i]]=max(dp[i]+150, dp[b[i]]); 
  }

  ans=dp[n];
  cout<<ans<<endl;
  return 0;
}
    
