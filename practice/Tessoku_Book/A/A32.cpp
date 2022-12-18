
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


int n,a,b;
bool dp[100009];

int main(){
  cin>>n>>a>>b;

  //先手主観で考える。dp[0]=false→先手負け
  for(int i=0; i<a; i++)dp[i]=false;

  //配るDP
  for(int i=0; i<=n; i++){
    if(i>=a && dp[i-a]==false)dp[i]=true;
    else if(i>=b && dp[i-b]==false)dp[i]=true;
  }

  if(dp[n]==true)cout<<"First"<<endl;
  else cout<<"Second"<<endl;
  

  return 0;
}
    
