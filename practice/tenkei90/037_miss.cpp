
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
using ld=long double;
#define PI (ld)3.14159265358979


int w, n, l[509], r[509], v[509];
ll dp[509][10009]; //入る値はvalue


int main(){
  cin>>w>>n;
  for(int i=1; i<=n; i++)cin>>l[i]>>r[i]>>v[i];

  for(int i=0; i<=n; i++){
    for(int j=0; j<=w; j++){
      dp[i][j]=-1;
    }
  }
  dp[0][0]=0;

  for(int i=1; i<=n; i++){
    for(int j=0; j<=w; j++){
      if(j<l[i]){
        dp[i][j]=dp[i-1][j];
      }
      else if(l[i]<=j && j<r[i]){
        ll tmp=0;
        int place=0;
        for(int k=0; k<=j-l[i]; k++){
          if(dp[i-1][k]>tmp){
            tmp=dp[i-1][k];
            place=k;
          }
        }
        dp[i][j]=max(dp[i-1][j], dp[i-1][place]+v[i]);
      }
      else{
        ll tmp=0;
        int place=j-r[i];
        for(int k=j-r[i]; k<=j-l[i]; k++){
          if(dp[i-1][k]>tmp){
            tmp=dp[i-1][k];
            place=k;
          }
        }
        if(dp[i-1][place]>0){
          dp[i][j]=max(dp[i-1][j], dp[i-1][place]+v[i]);
        }
        else{
          dp[i][j]=dp[i-1][j];
        }
        
      }
    }
  }

  if(dp[n][w]==0){
    cout<<-1<<endl;
  }
  else{
    cout<<dp[n][w]<<endl;
  }

  return 0;
}
    
