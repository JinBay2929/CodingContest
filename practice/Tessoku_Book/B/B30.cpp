
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


ll h, w, MOD=1000000007;

ll Power(ll a, ll b, ll m){
  ll ans=1;
  ll p=a;

  //大体2**60で10**18までカバーできる
  for(int i=0; i<=60; i++){
    //1を置くだけだとオーバーフローする。
    //なのでllで型を指定してあげた
    if((b/(1ll<<i)) %2==1){ 
      ans*=(p%m);
      ans%=m;
    }

    p=p*p%m;

  }
  return ans;
}

//a÷bをmで割った余り
ll Divi(ll a, ll b, ll m){
  return (a*Power(b, m-2, m)) %m;
}


int main(){
  cin>>h>>w;

  //分子(h+w-2)!
  ll bunshi=1;
  for(int i=h+w-2; i>=1; i--){
    bunshi=bunshi*i%MOD;
  }

  //分母(h-1)!*(w-1)!
  ll bunbo=1;
  for(int i=h-1; i>=1; i--){
    bunbo=(bunbo*i)%MOD;
  }
  for(int i=w-1; i>=1; i--){
    bunbo=(bunbo*i)%MOD;
  }



  //割り算
  ll ans;
  ans=Divi(bunshi, bunbo, MOD);


  cout<<ans<<endl;


  
  
   
  return 0;
}
    
