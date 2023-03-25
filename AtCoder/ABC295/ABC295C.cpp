
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

ll n, a[500009];
set<int> s;


int main(){
  cin>>n;
  for(int i=1; i<=n; i++){
    cin>>a[i];
  }

  sort(a+1, a+n+1);

  ll now=0, cnt=0, ans=0;

  for(int i=1; i<=n; i++){
    if(now<a[i]){
      ans+=(cnt/2);
      cnt=1;
      now=a[i];
    }
    else if(now==a[i]){
      cnt++;
      if(i==n){
        ans+=(cnt/2);
        cnt=0;
      }
    }
    

  }
  
  

  cout<<ans<<endl;


  return 0;

}
    
