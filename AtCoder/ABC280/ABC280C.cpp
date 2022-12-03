
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


string s, t;
int n, ans=0;

int main(){
  cin>>s>>t;
  
  int lt=t.length();

  for(int i=0; i<lt; i++){
    if(s[i]!=t[i]){
      ans=i+1;
      break;
    }
  }

  cout<<ans<<endl;

  return 0;
}
    
