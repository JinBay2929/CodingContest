
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

int n, s, a[1009], b[1009];


bool dp[109][1000009]; //i:個数 j:値段


int main(){
  cin>>n>>s;

  for(int i=1; i<=n; i++)cin>>a[i]>>b[i];

  //まず買えるのか判定する
  dp[0][0]=true;
  for(int i=1; i<=n; i++){
    for(int j=0; j<=s; j++){
      if(min(a[i], b[i])<=j && j<max(a[i], b[i])){
        if(dp[i-1][j-min(a[i], b[i])]){
          dp[i][j]=true;
        }
      }
      else if(j>=max(a[i], b[i])){
        if(dp[i-1][j-a[i]] || dp[i-1][j-b[i]]){
          dp[i][j]=true;
        }
      }
    }
  }

  

  if(!dp[n][s]){
    cout<<"Impossible"<<endl;
  }
  else{
    string ans(n, '.');
    int sum=s; //逆にたどる際、その時点での和を記録しておく
    for(int i=n-1; i>=0; i--){
      if(dp[i][sum-a[i+1]]==true && sum-a[i+1]>=0){
        ans[i]='A';
        sum-=a[i+1];
        
      }
      else{
        ans[i]='B';
        sum-=b[i+1];
        
      }
    }

    
    cout<<ans<<endl;
  }

  

 
 
  return 0;
}
    
