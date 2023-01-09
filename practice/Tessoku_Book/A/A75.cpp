
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


int n;
int t[1449], d[1449];
vector<pair<int, int>> times;

//手順iが終わった時点の現在時刻jで、何問解けているか
int dp[109][1409];


int main(){
  cin>>n;

  for(int i=1; i<=n; i++)cin>>t[i]>>d[i];

  for(int i=1; i<=n; i++){
    times.push_back(make_pair(d[i], t[i]));
  }

  sort(times.begin(), times.end());

  //t,dをソートされた状態にして元の配列を上書き。
  for(int i=1; i<=n; i++){
    d[i]=times[i-1].first;
    t[i]=times[i-1].second;
  }
  
  for(int i=1; i<=n; i++){
    for(int j=0; j<=1440; j++){
      dp[i][j]=-1;
    }
  }

  dp[0][0]=0;
  for(int i=1; i<=n; i++){
    for(int j=0; j<=1440; j++){
      //時間オーバーorそもそも解けるだけの時間がない
      if(d[i]<j || t[i]>j){
        dp[i][j]=dp[i-1][j];
      }
      else{
        dp[i][j]=max(dp[i-1][j], dp[i-1][j-t[i]]+1);
      }
    }
  }

  int ans=0;
  for(int j=0; j<=1440; j++)ans=max(ans, dp[n][j]);

  cout<<ans<<endl;
  

  
  return 0;
}
    
