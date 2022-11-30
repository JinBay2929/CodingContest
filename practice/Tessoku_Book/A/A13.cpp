
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


int n, k;
long long a[100009], ans=0, r[100009];

int main(){
  cin>>n>>k;
  for(int i=1; i<=n; i++)cin>>a[i];

  
  for(int i=1; i<=n-1; i++){
    if(i==1) r[1]=1;
    //条件を満たすラインを少しずつ進めていく
    else r[i]=r[i-1];

    //12->100みたいな断絶が起きた場合もケアされてる
    while(a[r[i]+1]-a[i]<=k && r[i]<=n-1){
      r[i]++;
    }
    ans+=(r[i]-i);
  }

  cout<<ans<<endl;

  return 0;
}

    
    
    
    
