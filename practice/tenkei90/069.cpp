
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

ll n, k, ans, MOD=1'000'000'007;

//aのb乗をMODで余りとる
int power(ll a, ll b){
  ll ans=1;
  while(b!=0){
    if(b%2==1)ans = (ll)ans*a%MOD;

    a = a*a%MOD;
    b/=2;
  }

  return ans;
}

int main(){
  cin>>n>>k;
  
  //n,kの場合分けが意外と難しいので整理。
  if(k==1){
    if(n==1)cout<<1<<endl;
    else cout<<0<<endl;
  }
  else if(n==1){
    cout<<k%MOD<<endl;
  }
  else if(n==2){
    cout<<k%MOD*(k-1)%MOD<<endl;
  }
  else{
    cout<<k%MOD*(k-1)%MOD * power(k-2, n-2)%MOD<<endl;
  }

  
  
 
  return 0;
}
    
