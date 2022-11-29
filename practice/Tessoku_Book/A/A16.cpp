
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
int a[100009], b[100009], ti[100009];

int main(){
  cin>>n;
  
  for(int i=2; i<=n; i++)cin>>a[i];
  for(int i=3; i<=n; i++)cin>>b[i];

  ti[1]=0;
  ti[2]=a[2];
  for(int i=3; i<=n; i++){
    ti[i]=min(ti[i-1]+a[i], ti[i-2]+b[i]);
  }

  cout<<ti[n]<<endl;


  return 0;
}

    
    
    
    
