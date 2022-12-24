
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


int n, k, a[309], b[309], ans=0;


int main(){
  cin>>n>>k;

  for(int i=1; i<=n; i++)cin>>a[i]>>b[i];

  //気力、体力は1~100なので、100*100=10000通りの下限値の組み合わせを
  //全探索する。
  for(int i=1; i<=100; i++){
    for(int j=1; j<=100; j++){

      int counter=0;
      for(int h=1; h<=n; h++){
        if(i<=a[h] && a[h]<=i+k && j<=b[h] && b[h]<=j+k){
          counter++;
        }
      }
      ans=max(ans, counter);
    }
    
  }
 
  cout<<ans<<endl;

  
  

  return 0;
}
    
