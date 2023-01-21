
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
#include <iomanip>
using namespace std;   

int n, p, q, r, s, ans;
int a[109], tmp[109];

int main(){
  cin>>n>>p>>q>>r>>s;
  
  for(int i=1; i<=n; i++){
      cin>>a[i];
  }

  for(int i=p; i<=q; i++){
      tmp[i+r-p]=a[i];
      tmp[i]=a[i+r-p];
  }

  for(int i=p; i<=q; i++){
      a[i]=tmp[i];
  }

  for(int i=r; i<=s; i++){
      a[i]=tmp[i];
  }

  for(int i=1; i<=n; i++){
      cout<<a[i];
      if(i<n)cout<<" ";
  }

  cout<<endl;
  
   
  return 0;
}
    
