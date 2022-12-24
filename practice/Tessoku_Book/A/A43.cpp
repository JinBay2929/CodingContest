
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


long long  n, l, a[200009];
long long ans=0;

char b[200009];


int main(){
  cin>>n>>l;

  for(int i=1; i<=n; i++)cin>>a[i]>>b[i];


  for(int i=1; i<=n; i++){
    if(b[i]=='W'){
      ans=max(ans, a[i]);
    }else{
      ans=max(ans, l-a[i]);
    }
  }

  
  cout<<ans<<endl;

  
  

  return 0;
}
    
