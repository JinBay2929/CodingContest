
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

  if(b==a*2 || b==a*2+1){
    ans="Yes";
  }

  cout<<ans<<endl;


  return 0;
}
    
