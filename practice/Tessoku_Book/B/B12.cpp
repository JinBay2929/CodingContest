
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


int n ,x;


int main(){
  cin>>n;

  double left=0.000, right=100.000;

  //20回回せば大体OK？
  //left<rightだと無限ループする場合あり
  for(int i=0; i<20; i++){
    double mid=(left+right)/2;

    if(pow(mid, 3)+mid-n>=0.001){
      right=mid;
    }else if(pow(mid, 3)+mid-n<=0.001 && -(pow(mid, 3)-mid+n<=0.001)){
      left=mid;
      break;
    }else{
      left=mid;
    }

    //cout<<mid<<endl;
  }

  cout<<fixed;
  cout<<setprecision(6)<<left<<endl;
  
   
  return 0;
}
    
