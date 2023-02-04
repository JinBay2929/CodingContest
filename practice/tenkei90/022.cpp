
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

ll a, b, c, ans=0;

int main(){
  cin>>a>>b>>c;

  ll n =gcd(a, gcd(b, c));

  a/=n;
  b/=n;
  c/=n;

  ans=a+b+c-3;
  cout<<ans<<endl;
  
  return 0;
}
    
