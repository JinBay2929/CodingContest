
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

ll n, k, a[300009];
vector<ll> v;


int main(){
  cin>>n>>k;

  for(int i=1; i<=n; i++)cin>>a[i];
  for(int i=1; i<=n; i++)v.push_back(a[i]);

  sort(v.begin(), v.end());
  v.erase(unique(v.begin(), v.end()), v.end());

  ll len=v.size();

  int ans=0;
  for(int i=0; i<min(k, len); i++){
    if(v[i]!=ans){
      break;
    }
    ans++;
  }

  cout<<ans<<endl;


  return 0;
}
    
