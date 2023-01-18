
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
string s;
int dp[2009][2009];

int main(){
  cin>>n;
  cin>>s;

  //reverseした文字列との最長共通部分列を求めればOK
  string t=s;
  reverse(t.begin(), t.end());

  for(int i=0; i<=n; i++){
    for(int j=0; j<=n; j++){
      if(i>=1 && j>=1 && s[i-1]==t[j-1]){
        dp[i][j]=max({dp[i-1][j], dp[i][j-1], dp[i-1][j-1]+1});
      }
      else if(i>=1 && j>=1){
        dp[i][j]=max(dp[i-1][j], dp[i][j-1]);
      }
      else if(i>=1){
        dp[i][j]=dp[i-1][j];
      }
      else if(j>=1){
        dp[i][j]=dp[i][j-1];
      }
      
    }
  }

  cout<<dp[n][n]<<endl;
   
  return 0;
}
    
