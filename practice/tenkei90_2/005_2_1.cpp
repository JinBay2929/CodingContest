
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

//桁DP
//ケース1のみを突破する
//nの制約がないとdpができない。

int K, c[19], b;
ll n, MOD=1'000'000'007;
ll dp[10009][39];  //dp[上から何桁目まで][Bで割った余り]=通り数

int main(){
  cin>>n>>b>>K;

  for(int i=1; i<=K; i++){
    cin>>c[i];
  }

  dp[0][0]=1;
  for(int i=1; i<=n; i++){
    for(int j=0; j<b; j++){
      for(int k=1; k<=K; k++){
        int nex=(10*j+c[k])%b; //一桁末尾に加えた場合の余り計算
        
        dp[i][nex]+=dp[i-1][j];
        dp[i][nex]%=MOD;

      }    
    }
  }

  cout<<dp[n][0]<<endl;

  
}
    
