
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

ll n, p, q;
ll a[109];
ll ans=0;

int main(){
  cin>>n>>p>>q;

  for(int i=1; i<=n; i++)cin>>a[i];

  for(int i=1; i<=n-4; i++){
    for(int j=i+1; j<=n-3; j++){
      for(int k=j+1; k<=n-2; k++){
        for(int l=k+1; l<=n-1; l++){
          for(int m=l+1; m<=n; m++){
            ll tmp=a[i]%p;
            tmp=tmp*a[j]%p;
            tmp=tmp*a[k]%p;
            tmp=tmp*a[l]%p;
            tmp=tmp*a[m]%p;

            if(tmp==q)ans++;
          }
        }
      }
    }
  }

  cout<<ans<<endl;

 
 
  return 0;
}
    
