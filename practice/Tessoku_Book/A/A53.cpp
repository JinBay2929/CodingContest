
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
//priority_queueの定義の仕方は暗記で良いと思う
priority_queue<int, vector<int>, greater<int> > pq;

int main(){
  cin>>q;

  for(int i=1; i<=q; i++){
    int type;
    cin>>type;

    if(type==1){
      int x;
      cin>>x;
      pq.push(x);
    }
    else if(type==2){
      cout<<pq.top()<<endl;
    }
    else if(type==3){
      pq.pop();
    }
  }

  

  return 0;
}
    
