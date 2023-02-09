
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


int n, a[300009];
int Ll[300009], Lr[300009],  dpl[300009], dpr[300009];

int main(){
  cin>>n;
  for(int i=1; i<=n; i++)cin>>a[i];

  int len=0;
  for(int i=1; i<=n; i++){
    int pos = lower_bound(Ll+1, Ll+len+1, a[i])-Ll;
    Ll[pos]=a[i];
    dpl[i]=pos;

    if(pos>len)len++;
  }

  len=0;
  for(int i=n; i>=1; i--){
    int pos = lower_bound(Lr+1, Lr+len+1, a[i])-Lr;
    Lr[pos]=a[i];
    dpr[i]=pos;

    if(pos>len)len++;
  }

  
  // for(int i=1; i<=n; i++){
  //   cout<<dpl[i]<<" ";
  // } 
  // cout<<endl;
  // for(int i=1; i<=n; i++){
  //   cout<<dpr[i]<<" ";
  // } 


  int ans=0;
  for(int i=1; i<=n; i++){
    ans=max(ans, dpl[i]+dpr[i]-1);
  }

  cout<<ans<<endl;

  
  //K番目の物は必ず採用されなければならない。
  //⇒もしa[k-1]>a[k]ならば増加部分列が大きくなるのはa[k-1]を
  //末尾にしたとき。
  //なので両側の部分列を普通に出せばOK
  //最大になってるならばK番目は絶対に採用されてる
 
 
  return 0;
}
    
