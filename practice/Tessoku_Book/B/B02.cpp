
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


int a, b;
string ans="No";

int main(){
  cin>>a>>b;
  
  for(int i=a; i<=b; i++){
    if(100%i==0){
      ans="Yes";
      break;
    }
  }
 
  cout<<ans<<endl;
  return 0;
}
    
