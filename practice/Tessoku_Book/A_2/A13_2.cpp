
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


int n;
long long k;
long long a[100009], r[100009];


int main(){
  cin>>n>>k;

  for(int i=1; i<=n; i++){
    cin>>a[i];
  }

  
  for(int i=1; i<=n-1; i++){
    if(i==1){
      r[1]=1;
    }else{
      r[i]=r[i-1];
    }
    
    //a[r[i]+1]にすることで進める条件付けにしてる。
    //地味に妙技。
    while(a[r[i]+1]-a[i]<=k && r[i]<n){
      r[i]++;
    }
  }

  long long ans=0;

  for(int i=1; i<=n-1; i++){
    ans+=(r[i]-i);
  }

  cout<<ans<<endl;
  
   
  return 0;
}
    
