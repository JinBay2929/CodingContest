
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


long long a, b, ans;

int main(){
  cin>>a>>b;

  while(a>=1 && b>=1){
    if(a>b){
      a%=b;
    }
    else{
      b%=a;
    }
  }

  cout<<max(a, b)<<endl;
  
   
  return 0;
}
    
