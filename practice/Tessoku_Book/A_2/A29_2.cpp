
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


ll a, b, MOD=1000000007;

ll Power(ll a, ll b, ll m){
  ll ans=1;
  ll p=a;

  //大体2**30で10**9までカバーできるので
  for(int i=0; i<=30; i++){
    if((b/(1<<i)) %2==1){
      ans*=(p%m);
      ans%=m;
    }

    p=p*p%m;

  }

  return ans;
}


int main(){
  cin>>a>>b;

  cout<<Power(a, b, MOD)<<endl;


  
  
   
  return 0;
}
    
