
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


int n, ans=0;
int a[200009];

int main(){
  cin>>n;

  for(int i=1; i<=n; i++)cin>>a[i];

  sort(a+1, a+n+1);

  for(int i=1; i<=100; i++){
    int counter=0;
    int j=1;
    while(a[j]<=i){
      if(a[j]==i && j<=n){
        counter++;
      }
      j++;
    }
    if(counter>=3)ans++;
  }

  cout<<ans<<endl;

  


  cout<<ans<<endl;

  
  

  return 0;
}
    
