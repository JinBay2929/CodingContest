
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





ll a, x, m;
ll ans;
ll s,b, c, d;

int main(){
  cin>>a>>x>>m;

  s=sqrt(x);

  ll tmp=1;
  for(ll i=0; i<s; i++){
    b+=tmp;
    tmp*=a;

    b%=m;
    tmp%=m;
  }

  d=tmp;
  

  tmp=1;
  for(ll i=0; i<s; i++){
    c+=tmp;
    tmp*=d;

    c%=m;
    tmp%=m;
  }
  c*=b;
  c%=m;

  for(ll i=1; i<=(x-s*s); i++){
    c*=a;
    c+=1;

    c%=m;
  }

  c%=m;

  cout<<c<<endl;

  


  return 0;

}
    
