
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



ll n, a[200009], b[200009], MOD=998244353;
ll dpa[200009], dpb[200009];

int main(){
  cin>>n;

  for(int i=1; i<=n; i++){
    cin>>a[i]>>b[i];
  }
  for(int i=1; i<=n; i++){
    dpa[i]=0;
    dpb[i]=0;
  }

  dpa[1]=1, dpb[1]=1;
  for(int i=2; i<=n; i++){
    if(a[i]!=a[i-1]){
      dpa[i]+=dpa[i-1];
      dpa[i]%=MOD;
    }
    if(a[i]!=b[i-1]){
      dpa[i]+=dpb[i-1];
      dpa[i]%=MOD;
    }
    if(b[i]!=a[i-1]){
      dpb[i]+=dpa[i-1];
      dpb[i]%=MOD;
    }
    if(b[i]!=b[i-1]){
      dpb[i]+=dpb[i-1];
      dpb[i]%=MOD;
    }
    
  }

  ll ans=(dpa[n]%MOD) + (dpb[n]%MOD);
  cout<<ans%MOD<<endl;

 
  


  
	return 0;
}
    
