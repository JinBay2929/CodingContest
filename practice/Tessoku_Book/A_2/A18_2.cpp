
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


int n, s;
int a[69];
bool dp[69][10009];
string ans="No";

int main(){
  cin>>n>>s;

  for(int i=1; i<=n; i++)cin>>a[i];
  
  for(int i=0; i<=n; i++){
    dp[i][0]=true;
  }

  for(int i=1; i<=n; i++){
    for(int j=0; j<10005; j++){
      //j-a[i]>=0、つまり和がそのカードよりも小さいときは絶対に
      //条件を満たせない。ここで場合分けしないとバグる
      if(j-a[i]>=0){
        if(dp[i-1][j]==true || dp[i-1][j-a[i]]==true){
          dp[i][j]=true;
        }
      }
      else{
        if(dp[i-1][j]==true){
          dp[i][j]=true;
        }
      }
      
    }
  }

  if(dp[n][s]==true)ans="Yes";

  cout<<ans<<endl;
  

   
  return 0;
}
    
