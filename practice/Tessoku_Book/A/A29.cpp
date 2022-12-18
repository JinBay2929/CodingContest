
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


// a の b 乗を m で割った余りを返す関数
// 変数 a は a^1 → a^2 → a^4 → a^8 → a^16 → ･･･ と変化
long long Pow(long long a, long long b, long long m){
  long long p=a, ans=1;
  for(int i=0; i<30; i++){
    long long wari = (1<<i);

    if((b/wari) % 2==1){
      // 「a の 2^i 乗」が掛けられるとき
      ans=(ans*p)%m;
    }

    //a の 2^i 乗を掛けてもいいが余りだけ知りたいので
    //2乗4乗8乗16乗…をpで管理しても良い
    p=(p*p)%m;
  }

  return ans;
}

long long a, b;

int main(){
  cin>>a>>b;
  
  

  cout<<Pow(a, b, 1000000007)<<endl;

  return 0;
}
    
