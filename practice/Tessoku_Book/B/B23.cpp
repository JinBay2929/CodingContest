
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



int n, x[19], y[19];
double dp[1<<16][19];

int main(){
  cin>>n;
  //都市番号は0番からとしている
  for(int i=0; i<n; i++)cin>>x[i]>>y[i];

  for (int i = 0; i < (1 << n); i++) {
		for (int j=0; j<n; j++) {
      dp[i][j] = 1e9;
    }
	}

  // 動的計画法（dp[通った都市][今いる都市] となっている）
	dp[0][0] = 0;
	for (int i=0; i<(1<<n); i++) {
		for (int j=0; j<n; j++) {
			if (dp[i][j] >= 1e9) continue;
 
			// 都市 j から都市 k に移動したい！
			for (int k=0; k<n; k++) {
				// 既に都市 k を通っていた場合
        //距離を計算する必要はないのでcontinue
				if ((i / (1<<k)) % 2 == 1) continue; 
 
				// 状態遷移
				double DIST = sqrt(1.0*(x[j]-x[k])*(x[j]-x[k]) 
          + 1.0 * (y[j] -y[k])*(y[j]-y[k]));

        //遷移したときの距離の最小値を出す
				dp[i+(1<<k)][k] = min(dp[i+(1<<k)][k], dp[i][j] + DIST);
			}
		}
	}


  cout<<setprecision(6)<<dp[(1<<n)-1][0]<<endl;
 

  
   
  return 0;
}
    
