
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
int l[109], r[109];

//期待値の和＝＝和の期待値。
//E[X]+E[Y]=E[X+Y]
//計何個転倒数があるかの期待値を出すにはx[i]とx[j]で転倒数が発生する期待値
//を全探索して足せばいい。


int main(){
  cin>>n;
  for(int i=1; i<=n; i++)cin>>l[i]>>r[i];
  
  ld ans=0;
  for(int i=1; i<=n-1; i++){
    for(int j=i+1; j<=n; j++){
      int total=(r[i]-l[i]+1)*(r[j]-l[j]+1);
      ld cnt=0;

      for(int k=l[i]; k<=r[i]; k++){
        for(int x=l[j]; x<=r[j]; x++){
          if(k>x)cnt++;
        }
      }
      

      ans+=(ld)(cnt/total);
     
    }
  }

  cout<<setprecision(10)<<ans<<endl;


 
  return 0;
}
    
