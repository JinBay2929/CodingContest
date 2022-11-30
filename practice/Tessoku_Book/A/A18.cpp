
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


int n, s;
int a[109];
bool dp[69][10009];
string ans="No";

vector<int> place;
int main(){
  cin>>n>>s;

  for (int i = 1; i<=n;  i++)cin>>a[i];
 

  dp[0][0]=true;
  for(int i=1; i<=n; i++)dp[0][i]=false;
  
  for(int i=1; i<=n; i++){
    for(int j=0; j<=s; j++){
      if(j<a[i]){
        if(dp[i-1][j]==true){
          dp[i][j]=true;
        }else{
          dp[i][j]=false;
        }
      }
      if(j>=a[i]){
        if(dp[i-1][j]==true || dp[i-1][j-a[i]]==true){
          dp[i][j]=true;
        }else{
          dp[i][j]=false;
        }
      }
    }
  }

  if(dp[n][s]==true)ans="Yes";

  cout<<ans<<endl;
  return 0;
}

    
    
    
