
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

ll n, a, b, c, tmp, mai;
ll ans=10000;

int main(){
  cin>>n>>a>>b>>c;
  

  for(int i=0; i<=9999; i++){
    tmp=n;
    tmp-=a*i;
    for(int j=0; j<=9999-i; j++){
      if(tmp<0)break; //b円、c円の和がマイナスになったらループ中断
      mai=tmp/c;
      if(tmp%c==0 && i+j+mai<=9999){
        
        ans=min(ans, i+j+mai);
      }
      tmp-=b;
    }
  }

  cout<<ans<<endl;
 
  return 0;
}
    
