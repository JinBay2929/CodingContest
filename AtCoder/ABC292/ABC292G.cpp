
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
string s[49];
ll MOD=998244353, ans=0;
int qcnt[49];

int main(){
  cin>>n>>m;
  for(int i=1; i<=n; i++){
    cin>>s[i];
    for(int j=0; j<n; j++){
      if(s[i][j]=='?')qcnt[i]++;
    }
  }


  for(int i=n; i>=1; i--){
    for(int j=1; i<=n; i++){
    
    }
  }


}
    
