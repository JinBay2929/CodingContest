
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



long long t, n, p, q;


int main(){
  cin>>t;

  for(int i=1; i<=t; i++){
    cin>>n;

    for(long long j=2; j<=sqrt(n); j++){
      if(n%j==0){
        n/=j;
        if(n%j==0){
          p=j;
          q=(n/j);
        }else{
          q=j;
          p=sqrt(n);
        }
        break;
      }
    }

    cout<<p<<' '<<q<<endl;
  }

 
 
  
  

  return 0;
}
    
