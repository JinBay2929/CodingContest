
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


int n;
long long ans=0;
int a[200009];


long long nc3(long long n){
  long long  ans;
  ans=n*(n-1)*(n-2)/6;

  return ans;
}

int main(){
  cin>>n;

  for(int i=1; i<=n; i++)cin>>a[i];

  for(int i=1; i<=100; i++){
    long long  count=0;
    for(int j=1; j<=n; j++){
      if(a[j]==i){
        count++;
      }
    }

    if(count>=3){
      ans+=nc3(count);
    }
    
  }
  

  


  cout<<ans<<endl;

  
  

  return 0;
}
    
