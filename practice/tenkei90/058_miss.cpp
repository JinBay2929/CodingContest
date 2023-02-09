
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


//移動する場所を2**iごとに管理し、最後にkが2**iのどんな組み合わせで
//できてるかを考えた。
//kが大きすぎて(1<<i)で割る数字を管理できず失敗

ll n, k, ans;
int dp[69][100099]; //2**i回ボタンを押すとjにいます

int pushA(int x){
  string s=to_string(x);
  int len=s.size(), amari=0, ans;
  for(int i=0; i<len; i++){
    amari+=(s[i]-'0');
  }

  ans=(x+amari)%100000;
  return ans;
}

int main(){
  cin>>n>>k;

  
  for(int i=0; i<=60; i++){
    for(int j=0; j<=100049; j++){
      if(i==0){
        dp[0][j]=pushA(j);
      }
      else{
        dp[i][j]=dp[i-1][dp[i-1][j]];
      }
    }
  }

  ll tmp=n;
  for(ll i=0; i<=30; i++){
    if(k/(1<<i)%2==1){
      tmp=dp[i][tmp];
      cout<<tmp<<endl;
    }
  }

  cout<<tmp<<endl;
  


  

 
 
  return 0;
}
    
