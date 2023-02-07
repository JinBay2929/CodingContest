
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

int n;
int a[109][9];
ll ans, MOD=1'000'000'007;
ll sum[109];  //横方向に和をとる。行の累積和。

int main(){
  cin>>n;

  for(int i=1; i<=n; i++){
    for(int j=1; j<=6; j++){
      cin>>a[i][j];
    }
  }

  for(int i=1; i<=n; i++){
    ll tmp=0;
    for(int j=1; j<=6; j++){
      tmp+=a[i][j];
    }
    sum[i]=tmp;
  }

  ans=1;
  for(int i=1; i<=n; i++){
    ans*=sum[i];
    ans%=MOD;
  }

  cout<<ans<<endl;



 
 
  return 0;
}
    
