
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

ll n, cnt=0; //cntに1以外の役数が何個あるか入力する

int main(){
  cin>>n;

  for(ll i=2; i*i<=n; i++){
    while(n%i==0){
      n/=i;
      cnt++;
      //cout<<i<<endl;
    }
  }
  if(n>1)cnt++;  //割って行って残りが素数のケースのみcnt++

  //魔法の回数を考える。端数なしで丁度2のk乗のときとそれ以外で場合分け。
  int il=(int)log2(cnt);
  if(il==log2(cnt)){
    cout<<il<<endl;
  }
  else{
    cout<<il+1<<endl;
  }
  
  //cout<<cnt<<endl;

  return 0;
}
    
