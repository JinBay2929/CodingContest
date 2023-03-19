
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





ll n, a[109];
vector<ll> ans;

int main(){
  cin>>n;
  for(int i=1; i<=n; i++)cin>>a[i];

  for(int i=1; i<=n; i++){
    if(a[i]%2==0)ans.push_back(a[i]);
  }

  for(int i=0; i<(int)ans.size(); i++){
    if(i>0)cout<<" ";
    cout<<ans[i];
  }

  cout<<endl;
  

  


  return 0;

}
    
