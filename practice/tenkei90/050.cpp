
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


int n, L;
ll MOD=1'000'000'007;

ll dp[100009];

int main(){
  cin>>n>>L;

 dp[0]=1;
 for(int i=1; i<=n; i++){
  if(i>=L){
    dp[i]=dp[i-1]+dp[i-L];
  } 
  else{
    dp[i]=dp[i-1];
  }
  dp[i]%=MOD;
 }
 
 cout<<dp[n]<<endl;
 

  


 
  return 0;
}
    
