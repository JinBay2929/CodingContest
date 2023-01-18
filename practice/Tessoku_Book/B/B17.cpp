
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


int n;
int h[100009];
long long dp[100009];

int main(){
  cin>>n;

  for(int i=1; i<=n; i++)cin>>h[i];
  
  //n=1,2の時のコストは入力しておく
  dp[1]=0;
  dp[2]=abs(h[2]-h[1]);
  for(int i=3; i<=n; i++){
    dp[i]=min(dp[i-1]+abs(h[i]-h[i-1]), dp[i-2]+abs(h[i]-h[i-2]));
  }

  int pos=n; //現在地
  vector<int> steps; //ジャンプの履歴

  steps.push_back(pos);
  while(pos>1){
    if(dp[pos]-abs(h[pos]-h[pos-1])==dp[pos-1]){
      pos-=1;
    }
    else{
      pos-=2;
    }
    steps.push_back(pos);
  }

  //小さい順にするためreverse
  reverse(steps.begin(), steps.end());

  int len=steps.size();
  cout<<len<<endl;  //ステップ数を出力

  for(int i=0; i<len; i++){
    cout<<steps[i];
    if(i<len-1)cout<<" ";
  }

  cout<<endl;

   
  return 0;
}
    
