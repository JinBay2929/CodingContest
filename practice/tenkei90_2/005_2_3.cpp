
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





//aのb乗をmで割った余り
ll modpow(ll a, ll b, ll m){
  ll p=a, ans=1;

  for(int i=0; i<63; i++){
    ll wari=(1<<i);
    if((b/wari)%2==1){
      ans=(ans*p)%m;
    }

    p=(p*p)%m;
  }

  return ans;
}

const ll MOD=1'000'000'007;
ll K, c[19], b;
ll n;

ll power10[69], dp[64][1009]; //dp[i][j]:2のi乗桁、余りj


int main(){
  cin>>n>>b>>K;

  for(int i=1; i<=K; i++){
    cin>>c[i];
  }

  // Step #2. 前計算
  //10のi乗をMODで割った余り
  for(int i=0; i<63; i++){
    power10[i]=modpow(10, i, MOD);
  }

  // Step #3. dp[1][j] を求める
	for (int j=1; j<=K; j++) {
		dp[0][c[j] % b] += 1;
	}

  // Step #4. dp[1][i], dp[2][i], ..., dp[2^n][i] を求める
	for (int i = 0; i < 62; i++) {
		for (int j = 0; j < b; j++) {
			for (int k = 0; k < b; k++) {
				int nex = (j * power10[i] + k) % b;
				dp[i + 1][nex] += dp[i][j] * dp[i][k];
				dp[i + 1][nex] %= MOD;
			}
		}
	}

  return 0;

}
    
