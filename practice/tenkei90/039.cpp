
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


int n;
ll a[100009], b[100009];
ll dp[100009];
vector<int> g[100009];

//dpにはその点を含めた子孫の点の数が入る
//posは現在地、preは一つ手前の点の番号
void dfs(int pos, int pre){
  dp[pos]=1;
  for(int i : g[pos]){
    if(i==pre)continue; //逆流防止
    dfs(i, pos);
    dp[pos]+=dp[i]; //帰りがけに点数を入力していく
  }
}

int main(){
  cin>>n;

  for(int i=1; i<=n-1; i++){
    cin>>a[i]>>b[i];
    g[a[i]].push_back(b[i]);
    g[b[i]].push_back(a[i]);
  }

  dfs(1, -1);

  ll ans=0;
  for(int i=1; i<=n-1; i++){
    //数が少ないまとまりについて、点の数を返す
    ll r=min(dp[a[i]], dp[b[i]]); 
    ans+=r*(n-r);  //各辺の使われる回数をプラス
  }

  cout<<ans<<endl;
  
  return 0;
}
    
