
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


int n, q;
int type, x, y;
int a[200009];
bool state=true; //trueなら通常方向、falseなら逆方向
vector<int> ans;


int main(){
  cin>>n>>q;

  for(int i=1; i<=n; i++){
    a[i]=i;
  }

  for(int i=1; i<=q; i++){
    cin>>type;
    
    if(type==1){
      cin>>x>>y;
      if(state){
        a[x]=y;
      }else{
        a[n-x+1]=y;
      }
      
    }else if(type==2){
      state = !state;
    }else{
      cin>>x;
      if(state){
        ans.push_back(a[x]);
      }else{
        ans.push_back(a[n-x+1]);
      }
    }
  }

  int len = ans.size();

  for(int i=0; i<len; i++){
    cout<<ans[i]<<endl;
  }


  return 0;
}
    
