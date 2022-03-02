
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

#include<cmath>
#include<map>
#include <sstream>
#include<ctime>
#include<queue>
#include<set>
#include <cassert>
#include <numeric>
using namespace std;   



int main(){
  int a, b, c, x, y, ans;
  cin>>a>>b>>c>>x>>y;

  //最初はA,Bで全部埋める場合を考え、ABと入れ替えていく。
  ans=a*x+b*y;
  for(int i=1; i<=max(x, y); i++){
    //先にA,Bのどちらかが0枚になるが、そうなったら0枚で固定する
    int tmpx=x-i, tmpy=y-i;
    if(tmpx<=0){
      tmpx=0;
    }
    if(tmpy<=0){
      tmpy=0;
    }

    ans=min(ans, (a*tmpx+b*tmpy+2*i*c));
  }
  
  cout<<ans<<endl;

  return 0;
}
    

    
    
    
    
