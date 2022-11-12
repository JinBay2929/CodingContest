
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
  int n, c[10000], minx=10000000;

  cin>>n;

  for(int i=0; i<n; i++){
    cin>>c[i];
  }

  for (int i=0; i<n; i++){
    minx = min(minx, c[i]);
  }

// パターン２
//   minx = *min_element(c+0, c+n);

  cout<<minx<<endl;

  return 0;
}
    

    
    
    
    
