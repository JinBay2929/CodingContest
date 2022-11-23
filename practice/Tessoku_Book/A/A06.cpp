
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
using namespace std;   


int main(){
  //累積和問題。S(N)=S(N-1)+a(N)を活用。

  int n, q, a[100008], l[100008], r[100008], sum[100008];
  cin>>n>>q;

  for(int i=1; i<=n; i++)cin>>a[i];
  for(int i=1; i<=q; i++)cin>>l[i]>>r[i];

  sum[0]=0;
  sum[1]=a[1];
  for(int i=2; i<=n; i++){
    sum[i]=(sum[i-1]+a[i]);
  }

  for(int i=1; i<=q; i++){
    cout<<sum[r[i]]-sum[l[i]-1]<<endl;
  }


  return 0;
}
    

    
    
    
    
