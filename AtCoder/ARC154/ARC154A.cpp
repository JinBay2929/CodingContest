
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



long long n, times[200009]; //10のi乗を998244353でわった余り
long long ans=0;
string a, b;

long long MOD=998244353;


int main(){
  cin>>n>>a>>b;

  times[0]=1;
  for(int i=1; i<=200004; i++){
    times[i]=(times[i-1]*10) % MOD;
  }



  
  for(int i=0; i<n; i++){
    //a大b小にする
    if(a[i]<b[i]){
      char tmp;
      tmp=a[i];
      a[i]=b[i];
      b[i]=tmp;
    }
  }

  //cout<<a<<b<<endl;

  long long tmpa=0, tmpb=0;
  for(long long i=0; i<n; i++){
    tmpa+=(a[n-i-1]-'0')*times[i]%MOD;
    tmpb+=(b[n-i-1]-'0')*times[i]%MOD;

    tmpa%=MOD;
    tmpb%=MOD;
  }

  ans=tmpa*tmpb%MOD;

  

  cout<<ans<<endl;


  

  
   
  return 0;
}
    
