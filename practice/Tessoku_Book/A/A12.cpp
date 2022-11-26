
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


long long  n, k; 
long long  a[100009];
bool ans;

bool check(long long x){
  //答えがx日以下かを返す関数
  long long mai=0;
  for(int i=1; i<=n; i++){
    mai+=(x/a[i]);
  }

  if(mai>=k)return true;
  else return false;
}
int main(){
  cin>>n>>k;
  for(int i=1; i<=n; i++) cin>>a[i];

  long long L=1, R=1'000'000'009;

  while(L<R){
    long long mid=(L+R)/2;

    ans=check(mid);
    if(ans==true){
      R=mid;
    }else{
      L=mid+1;
    }
    
  }

  cout<<L<<endl;

  return 0;
}
    

    
    
    
    
