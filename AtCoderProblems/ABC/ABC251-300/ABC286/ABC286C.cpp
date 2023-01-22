
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


//TLE地獄
int n;
long long a, b, ans=(1LL<<60); //ansは大きな数字で埋める。
string s;


int main(){
  cin>>n>>a>>b>>s;

  //sをもう一つ接続することで下でやるループの右側イテレータがはみ出して
  //場合分けする必要性がなくなる
  s+=s;

  //操作1の回数で全探索
  for(int i=0; i<=n-1; i++){
    long long tmp=a*i;

    //rotateする回数分左端、右端をずらす。
    //不一致回数が操作2の回数。
    for(int j=0; j<n/2; j++){
      int left=i+j;
      int right=i+n-1-j;

      if(s[left]!=s[right])tmp+=b;
    }
    ans=min(ans, tmp);
  }

  cout<<ans<<endl;
    
  
   
  return 0;
}
    
