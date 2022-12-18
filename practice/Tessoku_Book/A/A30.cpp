
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



//フェルマーの小定理
//Mを素数としbをMで割り切れない整数とすると、
//Mで割った余りを出す問題では÷bを×(b**(M-2))にしてもOK


// a の b 乗を m で割った余りを返す関数
// 変数 a は a^1 → a^2 → a^4 → a^8 → a^16 → ･･･ と変化
long long Pow(long long a, long long b, long long m){
  long long p=a, ans=1;
  for(int i=0; i<30; i++){
    long long wari = (1<<i);

    if((b/wari) % 2==1){
      // 「a の 2^i 乗」が掛けられるとき
      ans=(ans*p)%m;
    }

    //a の 2^i 乗を掛けてもいいが余りだけ知りたいので
    //2乗4乗8乗16乗…をpで管理しても良い
    p=(p*p)%m;
  }

  return ans;
}


// a ÷ b を m で割った余りを返す関数
long long Division(long long a, long long b, long long m) {
	return (a * Pow(b, m-2, m)) % m;
}

long long n, r;
long long bunshi=1, bunbo=1;
long long ans;

int main(){
  cin>>n>>r;
  
  //①分子のN!
  for(int i=1; i<=n; i++){
    bunshi*=i;
    bunshi%=1000000007;
  }

  //②分母のr!
  for(int i=1; i<=r; i++){
    bunbo*=i;
    bunbo%=1000000007;
  }


  //②分母の(n-r)!
  for(int i=1; i<=n-r; i++){
    bunbo*=i;
    bunbo%=1000000007;
  }
  
  ans=Division(bunshi, bunbo, 1000000007);

  cout<<ans<<endl;

  return 0;
}
    
