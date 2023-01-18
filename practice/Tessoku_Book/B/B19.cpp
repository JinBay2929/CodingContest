
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


int n;
//dp[i][j]:i品目まで選んだ時の価値(v)の合計がjである時の
//重さ(w)の最小値
long long W, dp[109][100009]; 
long long w[109], v[109];

int main(){
  cin>>n>>W;

  for(int i=1; i<=n; i++){
    cin>>w[i]>>v[i];
  }
  
  for (int i = 0; i <= n; i++) {
		for (int j = 0; j <= 100000; j++){
      //この埋め方じゃないと後でminを使うと0まみれになって機能しない。
       dp[i][j] = 1'000'000'000'000'000LL;
    }
	}

  dp[0][0]=0;
  for(int i=1; i<=n; i++){
    for(int j=0; j<=100000; j++){
      if(j>=v[i]){
        dp[i][j]=min(dp[i-1][j], dp[i-1][j-v[i]]+w[i]);
      }
      else{
        dp[i][j]=dp[i-1][j];
      }
    }
  }

  long long ans=0;

  for(int j=0; j<=100000; j++){
    if(dp[n][j]<=W){
      ans= j;
    }
  }

  cout<<ans<<endl;
   
  return 0;
}
    
