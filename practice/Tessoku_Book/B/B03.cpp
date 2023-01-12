
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


int n, a[109];
string ans="No";

int main(){
  cin>>n;
  for(int i=1; i<=n; i++)cin>>a[i];
  
  for(int i=1; i<=n-2; i++){
    for(int j=i+1; j<=n-1; j++){
      for(int k=j+1; k<=n; k++){
        if(a[i]+a[j]+a[k]==1000){
          ans="Yes";
        }
      }
    }
  }
  cout<<ans<<endl;
  return 0;
}
    
