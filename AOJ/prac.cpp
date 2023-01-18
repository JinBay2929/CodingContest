
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

int ans;
string s, t;
int dp[2009][2009];
//dp[i][j]:sのi番目までの文字列をtのj番目の部分列と一致させるのに
//必要な最小距離

int main(){
  cin>>s;
  cin>>t;

  int lens=s.size(), lent=t.size();

  dp[0][0]=0;
  for(int i=0; i<=lens; i++){
    for(int j=0; j<=lent; j++){
      if(i>=1 && j>=1 && s[i-1]==t[j-1]){
        dp[i][j]=min({dp[i-1][j]+1, dp[i][j-1]+1, dp[i-1][j-1]});
      }
      else if(i>=1 && j>=1){
        dp[i][j]=min({dp[i-1][j]+1, dp[i][j-1]+1, dp[i-1][j-1]+1});
      }
      else if(i>=1){
        dp[i][j]=dp[i-1][j]+1;
      }
      else if(j>=1){
        dp[i][j]=dp[i][j-1]+1;
      }
      
    }
  }

  cout<<dp[lens][lent]<<endl;
   
  return 0;
}
    
