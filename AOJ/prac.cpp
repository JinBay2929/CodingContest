
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


int n, k;
ll p, a[49], ans;

vector<int> lis;

int main(){
  cin>>n>>k>>p;

  for(int i=1; i<=n; i++)cin>>a[i];
 
  for(int i=1; i<=k; i++){
    lis.push_back(1);
  }
  for(int i=1; i<=n-k; i++){
    lis.push_back(0);
  }

  sort(lis.begin(), lis.end());
  
  do{
    ll tmp=0;
    for(int i=0; i<n; i++){
      if(lis[i]==1){
        tmp+=a[i+1];
      }
    }
    if(tmp<=p)ans++;

  }while(next_permutation(lis.begin(), lis.end()));

  cout<<ans<<endl;


 
  return 0;
}
    
