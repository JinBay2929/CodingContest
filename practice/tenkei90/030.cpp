
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
bool deleted[10000009];
int cnt[10000009];

int main(){
  cin>>n>>k;

  //エラトステネス    
  for(int i=2; i*i<=n; i++){
    if(deleted[i])continue;
    for(int j=i*2; j<=n; j+=i){
      deleted[j]=true;
    }
  }

  //各素数についてnまでのその素数の倍数は全部その素数で割り切れるので
  //種類数に1足していく
  for(int i=2; i<=n; i++){
    if(!deleted[i]){
      for(int j=i; j<=n; j+=i){
        cnt[j]++;
      }
    }
  }

  //種類がｋ以上のものをansにカウントしていく
  int ans=0;
  for(int i=2; i<=n; i++){
    if(cnt[i]>=k)ans++;
  }

  cout<<ans<<endl;

  return 0;
}
    
