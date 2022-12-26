
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


int q;
set<int> s;

int main(){
  cin>>q;

  for(int i=1; i<=q; i++){
    int type;
    cin>>type;

    if(type==1){
      int x;
      cin>>x;

      s.insert(x);
    }
    else if(type==2){
      int x;
      cin>>x;
      s.erase(x);
    }else if(type==3){
      int x;
      cin>>x;
      auto itr = s.lower_bound(x);

      //イテレータが末尾まで行くとエラーがでる可能性あり。
      //場合分けして-1を出力させる。
      if(itr==s.end())cout<<-1<<endl;
      else{
        cout<<(*itr)<<endl;
      }
    }
  }

  

  return 0;
}
    
