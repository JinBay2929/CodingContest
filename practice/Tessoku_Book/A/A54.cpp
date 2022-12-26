
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
map<string, int> m;

int main(){
  cin>>q;

  for(int i=1; i<=q; i++){
    int type;
    cin>>type;

    if(type==1){
      string x;
      int y;
      cin>>x>>y;
      m[x]=y;
    }
    else if(type==2){
      string x;
      cin>>x;
      cout<<m[x]<<endl;
    }
  }

  

  return 0;
}
    
