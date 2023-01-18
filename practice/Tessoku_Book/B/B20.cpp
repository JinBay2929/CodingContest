
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
        //同じ文字が末尾に生えた場合、必要な手数は前の文字までの手数と
        //変わらないためdp[i-1][j-1]に+1する必要がない
        dp[i][j]=min({dp[i-1][j]+1, dp[i][j-1]+1, dp[i-1][j-1]});
      }
      else if(i>=1 && j>=1){
        dp[i][j]=min({dp[i-1][j]+1, dp[i][j-1]+1, dp[i-1][j-1]+1});
      }
      else if(i>=1){
        //jが0ならば、sの文字数分だけ文字を生やす必要がある。
        dp[i][j]=dp[i-1][j]+1;
      }
      else if(j>=1){
        //iが0ならば、tの文字数分削除する必要がある。
        dp[i][j]=dp[i][j-1]+1;
      }
      
    }
  }

  cout<<dp[lens][lent]<<endl;
   
  return 0;
}
    
