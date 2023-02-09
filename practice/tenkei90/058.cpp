
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

ll n, k, ans, MOD=100000;
int nex[100009];  //dp[i]:iが次に訪れる数字

int pushA(int x){
  string s=to_string(x);
  int len=s.size(), amari=0, ans;
  for(int i=0; i<len; i++){
    amari+=(s[i]-'0');
  }

  ans=(x+amari)%100000;
  return ans;
}

int main(){
  cin>>n>>k;

  
  for(int i=0; i<=100000; i++){
    nex[i]=pushA(i);
  }

  vector<int> time_stamp(MOD, -1);

  int pos=n, cnt=0;
  //訪問したことがない場所に行く限りループ
  while(time_stamp[pos]==-1){ 
    time_stamp[pos]=cnt;
    pos=nex[pos];
    cnt++;
  }
  //5手後、8手後に同じところにいるのであればサイクルは3。
  //この例だとtime_stamp[pos]は5手が、cntには8が入ってる。
  int cycle=cnt-time_stamp[pos];

  if(k>=time_stamp[pos]){
    //ループ部分は割り算で消せる
    k=(k-time_stamp[pos])%cycle + time_stamp[pos];
  }


  for(int i=0; i<MOD; i++){
    if(time_stamp[i]==k){
      ans=i;
      break;
    }
  }

  cout<<ans<<endl;

  


  

 
 
  return 0;
}
    
