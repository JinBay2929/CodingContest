
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



ll n, q;
int e, x;
bool sumi[500009][2]; //1行目：呼ばれてる　2行目：すでに行った
set<int> s;
int min_num=1; 


int main(){
  cin>>n>>q;
  for(int i=1; i<=q; i++){
    cin>>e;

    if(e==1){
      s.insert(min_num);
      min_num++;
    }
    else if(e==2){
      cin>>x;
      s.erase(x);
    }
    else if(e==3){
      int tmp=*s.begin();
      cout<<tmp<<endl;
    }



  }
  
  

  


  return 0;

}
    
