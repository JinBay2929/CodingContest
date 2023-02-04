
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
string s[109], ns[109];


int main(){
  cin>>n>>k;
  for(int i=1; i<=n; i++)cin>>s[i];

  for(int i=1; i<=k; i++)ns[i]=s[i];

  sort(ns+1, ns+k+1);


  for(int i=1; i<=k; i++){
    cout<<ns[i]<<endl;
  }

  
  return 0;
}
    
