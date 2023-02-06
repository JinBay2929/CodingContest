
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


int k;
ll MOD=1'000'000'007;
ll dp[100009]; //各桁の和がiな数字の通り数

int main(){
  cin>>k;

  if(k%9!=0){
    cout<<0<<endl;
  }
  else{
    //桁の和がKの数字とは、頭が1で他がK-1、頭が2で他がK-1…
    //頭が9で他がK-9の計9パターンに分割できる。
    //すなわちi>=9の時、dp[i]=dp[i-1]+…dp[i-9]。
    //またi<=8のとき。各桁に0が入ってはいけないので
    //9パターンではなくiパターンに分けられる。
    //コード中ではmin(i,9)で選別。

    dp[0]=1;
    for(int i=1; i<=k; i++){
      int B=min(i, 9);
      for(int j=1; j<=B; j++){
        dp[i]+=dp[i-j];
        
        if(dp[i]>=MOD)dp[i]-=MOD; //大きければMODを引いて調整
      }
    }

    cout<<dp[k]<<endl;
  }
  
  return 0;
}
    
