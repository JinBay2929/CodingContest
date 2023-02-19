
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

int n, m;
int a[109], b[109];
ll ans=0;


int main(){
  cin>>n>>m;

  for(int i=1; i<=n; i++)cin>>a[i];
  for(int i=1; i<=m; i++)cin>>b[i];

  for(auto i : b){
    ans+=a[i];
  }

  cout<<ans<<endl;

  return 0;
}
    
