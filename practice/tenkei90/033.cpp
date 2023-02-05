
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


int h, w;

int main(){
  cin>>h>>w;

  int a, b;

  if(h>1 && w>1){
    if(h%2==0){
      a=h/2;
    }else{
      a=h/2+1;
    }

    if(w%2==0){
      b=w/2;
    }else{
      b=w/2+1;
    }

    cout<<a*b<<endl;
  }
  else{
    //どちらかが1ならば2*2の領域がないので全部点灯してても
    //不適切判定にならない
    cout<<max(h, w)<<endl;
  }
  

  


  return 0;
}
    
