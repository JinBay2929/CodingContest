
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


ll n, fib[10000009], MOD=1000000007;


int main(){
  cin>>n;

  fib[1]=1;
  fib[2]=1;

  for(ll i=3; i<=n; i++){
    fib[i]=(fib[i-1]+fib[i-2])%MOD;
  }


  cout<<fib[n]<<endl;

  
  
   
  return 0;
}
    
