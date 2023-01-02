
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


int n, a[100009], dp[100009];
vector<int> g[100009];


int main(){
  cin>>n;

  for(int i=2; i<=n; i++){
    //上司⇒部下の方向に線を追加
    cin>>a[i];
    g[a[i]].push_back(i);
  }

  for(int i=n; i>=1; i--){
    dp[i]=0;
    for(int j=0; j<g[i].size(); j++){
      //部下＋部下の部下なので(1+x)
      dp[i]+=(dp[g[i][j]] + 1);
    }

  }

  for(int i=1; i<=n; i++){
    cout<<dp[i];
    if(i<n)cout<<" ";
  }

  cout<<endl;

  
  

  return 0;
}
    
