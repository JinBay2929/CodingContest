
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


int n, a, b;
bool dp[100009]; //true先行勝ち、false後攻勝ち


int main(){
  cin>>n>>a>>b;

  //dp[0]~dp[a-1]までの場合分けも不要だし一番きれい
  for(int i=0; i<=n; i++){
    if(i>=a && dp[i-a]==false)dp[i]=true;
    else if(i>=b && dp[i-b]==false)dp[i]=true;
    else dp[i]=false;
  }


  if(dp[n]){
    cout<<"First"<<endl;
  }else{
    cout<<"Second"<<endl;
  }
  
  

   
  return 0;
}
    
