
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
ll k, a[1009], b[1009], d=0;

int main(){
  cin>>n>>k;
  for(int i=1; i<=n; i++)cin>>a[i];
  for(int i=1; i<=n; i++)cin>>b[i];

  for(int i=1; i<=n; i++){
    d+=abs(a[i]-b[i]);
  }

  if(k>=d && (k-d)%2==0){
    cout<<"Yes"<<endl;
  }
  else{
    cout<<"No"<<endl;
  }
  

  
  return 0;
}
    
