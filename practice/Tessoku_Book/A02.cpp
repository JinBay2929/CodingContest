
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


int main(){
  int n, x, a[1000];
  string ans="No";

  cin>>n>>x;
  for(int i=0; i<n; i++){
    cin>>a[i];
  }

  for(int i=0; i<n; i++){
    if(a[i]==x){
      ans="Yes";
      break;
    }
  }

  cout<<ans<<endl;

  return 0;
}
    

    
    
    
    
