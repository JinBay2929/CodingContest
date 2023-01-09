
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


long long n, w, l, r;
long long x[150009];
long long mod=1'000'000'007;

int dp[150009], sum[150009];


int main(){
  cin>>n>>w>>l>>r;

  for(int i=1; i<=n; i++){
    cin>>x[i];
  }

  x[0]=0, x[n+1]=w;

  dp[0]=1;
  sum[0]=1; //dpの累積値。

  //dp[i]=sum[posR]-sum[posL-1]である
  for(int i=1; i<=n+1; i++){
    int posL=lower_bound(x, x+n+2, x[i]-r)-x;
    int posR=lower_bound(x, x+n+2, x[i]-l+1)-x;
    //lower_boundはkey以上になる最小のイテレータを返す。
    //なのでアウトになる最小値を求めてから
    //posRを1引くことでセーフの最大値を出せる。
    posR--;

    if(posR==-1){
      dp[i]=0;
    }else{
      dp[i]=sum[posR];
    }

    if(posL>=1){
      dp[i]-=sum[posL-1];
    }

    //上の過程で引き算をしているので、
    //マイナスの余りを求める可能性があるため。
    dp[i]=(dp[i]+mod)%mod;

    sum[i]=sum[i-1]+dp[i];
    sum[i]%=mod;

  }

  
  cout<<dp[n+1]<<endl;

  
  return 0;
}
    
