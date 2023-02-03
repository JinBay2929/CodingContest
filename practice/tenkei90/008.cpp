
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

using ll=long long;

//解説AC

int n;
string s;
ll dp[100009][10], mod = 1000000007;

int main(){
  cin>>n>>s;

  //dp[i][j] ← 文字列 sの最初の i文字から何文字か抜き出してつなげる方法のうち、
  //それが "atcoder" の最初の j文字まで一致するような方法の個数

  //        a t c
  //      0 1 2 3
  //----------------
  //   0| 1 0 0 0
  // a 1| 1 1 0 0
  // a 2| 1 2 1 0
  // t 3| 1 2 3
  // p 4| 1
  // c 5| 1

  //dp[i][j]からdp[i+1][j],dp[i+1][j+1]に影響を与える。 
  //下と右下

  int len=s.size();
  dp[0][0]=1;

  for(int i=0; i<len; i++){
    for(int j=0; j<=7; j++){
      dp[i+1][j]+=dp[i][j];
      if(s[i]=='a' && j==0)dp[i+1][j+1]+=dp[i][j];
      if(s[i]=='t' && j==1)dp[i+1][j+1]+=dp[i][j];
      if(s[i]=='c' && j==2)dp[i+1][j+1]+=dp[i][j];
      if(s[i]=='o' && j==3)dp[i+1][j+1]+=dp[i][j];
      if(s[i]=='d' && j==4)dp[i+1][j+1]+=dp[i][j];
      if(s[i]=='e' && j==5)dp[i+1][j+1]+=dp[i][j];
      if(s[i]=='r' && j==6)dp[i+1][j+1]+=dp[i][j];
    }
    for (int j = 0; j <= 7; j++) dp[i + 1][j] %= mod;
  }

  cout<<dp[len][7]<<endl;
  return 0;
}
    
