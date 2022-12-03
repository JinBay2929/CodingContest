
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


string s, t;
int dp[2009][2009];
int ans;

int main(){
  cin>>s>>t;

  int ls=s.size();
  int lt=t.size();

  dp[0][0]=0;
  for(int i=0; i<=ls; i++){
    for(int j=0; j<=lt; j++){
      if(i==0 || j==0){
        //0行目、0列目は当然一致するのが0文字。
        dp[i][j]=0;
      }else if(i>0 && j>0 && s[i-1]!=t[j-1]){
        dp[i][j]=max(dp[i-1][j], dp[i][j-1]);
      }else{
        dp[i][j]=max({dp[i-1][j], dp[i][j-1], dp[i-1][j-1]+1});
      }
    }
  }
  
  ans=dp[ls][lt];

  cout<<ans<<endl;
  return 0;
}

    
    
    
