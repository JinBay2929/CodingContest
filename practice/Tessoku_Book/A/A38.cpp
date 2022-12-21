
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


int d, n, ans=0;
int l[10009], r[10009], h[10009], hours[10009];

int main(){
  cin>>d>>n;

  for(int i=1; i<=n; i++){
    cin>>l[i]>>r[i]>>h[i];
  }

  for(int i=1; i<=d; i++){
    hours[i]=24;
  }

  for(int i=1; i<=n; i++){
    for(int j=l[i]; j<=r[i]; j++){
      if(hours[j]>=h[i]){
        hours[j]=h[i];
      }
    }
  }


  for(int i=1; i<=d; i++){
    ans+=hours[i];
  }

  

  cout<<ans<<endl;
  

  return 0;
}
    
