
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


//ユークリッドで最大公約数を導出。
int gcd(int a, int b){
  while(a>=1 && b>=1){
    if(a>=b){
      a = (a%b);
    }else{
      b = (b%a);
    }
  }

  //残った方を出力。
  if(a!=0)return a;
  else return b;
}


int a, b;

int main(){
  cin>>a>>b;

  cout<<gcd(a, b)<<endl;

  return 0;
}
    
