
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
//行列累乗。隣り合う桁のDPの遷移は行列で表せる。
//一般にどんなiでもdp[i][?]⇒dp[i+1][?]の遷移形式が同じであるならば
//行列累乗を使える可能性が出てくる。

const ll MOD=1'000'000'007;
const int MAX_N=33; //constしないとstructでエラー発生

struct Matrix{
  int sz; //大きさsz*szの行列
  ll x[MAX_N][MAX_N];
};

Matrix multiply(Matrix A, Matrix B) {
	// A × B を求める
	Matrix C;
	C.sz = A.sz;

  //初期化
	for (int i = 0; i < C.sz; i++) {
		for (int j = 0; j < C.sz; j++) {
      C.x[i][j] = 0;
    }
	}

  //行列の計算
	for(int i=0; i<A.sz; i++){
    for(int j=0; j<A.sz; j++){
      for(int k=0; k<A.sz; k++){
        C.x[i][k]+=A.x[i][j] * B.x[j][k];
        C.x[i][k]%=MOD;
      }
    }
  }
	return C;
}

Matrix powers(Matrix A, ll T) {
	// A の T 乗を求める
	Matrix E[64], F;  //中身がMatrixの配列を作ればいい
	E[0] = A;

  //E[i]はA**(2**i)。
	for (int i = 1; i < 62; i++) {
		E[i] = multiply(E[i - 1], E[i - 1]);
	}

  //Fは大きさszの単位行列。multiplyで使いやすいように用意。
	F.sz = E[0].sz;
	for (int i = 0; i < F.sz; i++) {
		for (int j = 0; j < F.sz; j++) {
			if (i == j) F.x[i][j] = 1;
			if (i != j) F.x[i][j] = 0;
		}
	}

  //A**26=A**16 * A**8 * A**2みたいに
	for (int i = 62; i >= 0; i--) {
		if ((T & (1LL << i)) != 0LL) {
			F = multiply(F, E[i]);
		}
	}
	return F;
}

ll K, c[19], b;
ll n;


int main(){
  cin>>n>>b>>K;

  for(int i=1; i<=K; i++){
    cin>>c[i];
  }

  //行列累乗に使う行列Aを求めたい。
  Matrix A;
  A.sz=b;

  for (int i = 0; i <b; i++) {
		for (int j = 0; j <b; j++){
      A.x[i][j] = 0;
    }
	}
  for (int i = 0; i < b; i++) {
		for (int j = 1; j <= K; j++) {
			int nex = (i * 10 + c[j]) % b;
			A.x[i][nex] += 1;
		}
	}

  Matrix Z=powers(A, n);
  ll ans=Z.x[0][0];

  //dp[0][?]⇒dp[n][?]を考える。
  //dp[n][0]はpowers(A,n)*(1,0,0…)を計算、つまりZの[0][0]と一致。
  cout<<ans<<endl;

  return 0;

}
    
