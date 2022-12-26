
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


int  n, q, a[100009], x[100009], y[100009];
int dp[32][100009];  //dp[i][j]⇒穴jにいる2**i日後の位置


int main(){
  cin>>n>>q;
  
  for(int i=1; i<=n; i++)cin>>a[i];
  for(int i=1; i<=q; i++)cin>>x[i]>>y[i];

  for(int i=1; i<=n; i++)dp[0][i]=a[i];

  //dp[1][i]=dp[0][dp[0][i]]など
  for (int d = 1; d <= 29; d++){
    for (int i=1; i<=n; i++) {
      dp[d][i] = dp[d - 1][dp[d - 1][i]];
    }
  }

  for(int i=1; i<=q; i++){
    //現在地を管理する変数cp
    int cp=x[i];
    for(int d=29; d>=0; d--){
      //2進数表記で1ならば遷移を発生させる。
      if(y[i]/(1<<d) % 2 ==1)cp=dp[d][cp];
    }


    cout<<cp<<endl;
  }

  return 0;
}
    
