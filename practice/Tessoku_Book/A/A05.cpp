
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

  int n, k, ans=0;
  cin>>n>>k;

  for(int i=1; i<=n; i++){
    for(int j=1; j<=n; j++){
      if(1<=k-i-j && k-i-j<=n){
        ans++;
      }
    }
  }

  cout<<ans<<endl;
  return 0;
}
    

    
    
    
    
