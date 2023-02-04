
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

int n;
ll a[100009], b[100009], ans=0;

int main(){
  cin>>n;
  for(int i=1; i<=n; i++)cin>>a[i];
  for(int i=1; i<=n; i++)cin>>b[i];
 
  sort(a+1, a+n+1);
  sort(b+1, b+n+1);

  for(int i=1; i<=n; i++){
    ans+=abs(a[i]-b[i]);
  }

  cout<<ans<<endl;

 
  return 0;
}
    
