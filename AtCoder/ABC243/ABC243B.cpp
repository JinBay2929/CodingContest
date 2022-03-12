
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

#include<cmath>
#include<map>
#include <sstream>
#include<ctime>
#include<queue>
#include<set>
#include <cassert>
#include <numeric>
using namespace std;   



int main(){
  int n, a, b, hit=0, blow=0;
  vector<int> as, bs;
  cin>>n;

  for(int i=0; i<n; i++){
    cin>>a;
    as.push_back(a);
  }
  for(int i=0; i<n; i++){
    cin>>b;
    bs.push_back(b);
  }
  for(int i=0; i<n; i++){
    if(as[i]==bs[i]){
      hit++;
    }
  }
  for(int i=0; i<n; i++){
    for(int j=0; j<n; j++){
      if(i==j)continue;
      if(as[i]==bs[j]){
        blow++;
      }
    }
  }
  

  cout<<hit<<endl;
  cout<<blow<<endl;
  
  return 0;
}
    

    
    
    
    
