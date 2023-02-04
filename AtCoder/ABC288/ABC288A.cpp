
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
ll a[1009],b[1009];


int main(){
  cin>>n;
  for(int i=1; i<=n; i++)cin>>a[i]>>b[i];

  for(int i=1; i<=n; i++){
    cout<<a[i]+b[i]<<endl;
  }

  
  return 0;
}
    
