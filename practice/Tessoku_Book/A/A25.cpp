
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

int h, w;
long long dp[39][39];
char c[39][39];

int main(){
  cin>>h>>w;
  
  for(int i=1; i<=h; i++){
    for(int j=1; j<=w; j++){
      cin>>c[i][j];
    }
  }

  for(int i=0; i<=h; i++){
    for(int j=0; j<=w; j++){
      dp[i][j]=0;
    }
  }



  dp[1][1]=1;
  for(int i=1; i<=h; i++){
    for(int j=1; j<=w; j++){
      //スタート地点は1通りで固定なのでcontinue
      if(i==1 && j==1)continue;
      if(c[i][j]=='.'){
        dp[i][j]=dp[i-1][j]+dp[i][j-1];
      }
      else{
        dp[i][j]=0;
      }
    }
  }

  cout<<dp[h][w]<<endl;
  

  return 0;
}
    
