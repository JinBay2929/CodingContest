
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


long long n, t, a[100009], rou=0, losstime, music;

int main(){
  cin>>n>>t;
  
  for(int i=1; i<=n; i++){
    cin>>a[i];
  }

  for(long long i=1; i<=n; i++){
    rou+=a[i];
  }

  t=(t%rou)+rou;


  while(true){
    for(long long i=1; i<=n; i++){
      t-=a[i];
      if(t<=0){
        music=i;
        losstime=a[i]-abs(t);
        break;
      }
    }

    if(t<=0){
      break;
    }
  }

  cout<<music<<" "<<losstime<<endl;
  
  return 0;
}
    
