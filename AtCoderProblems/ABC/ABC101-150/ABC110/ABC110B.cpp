
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
  int n, m, x, y, num;
  vector<int> xs, ys;
  string ans="War";
  cin>>n>>m>>x>>y;

  for(int i=0; i<n; i++){
    cin>>num;
    xs.push_back(num);
  }

  for(int i=0; i<m; i++){
    cin>>num;
    ys.push_back(num);
  }

  int d=y-x;
  if(d<=0){
    ans="War";
  }else{
    int max = *max_element(xs.begin(), xs.end());
    int min = *min_element(ys.begin(), ys.end());

    for(int i=x+1; i<=y; i++){
      if(max<i && i<=min){
        ans="No War";
        break;
      }
    }
    

    
  }

  

  cout<<ans<<endl;

  return 0;
}
    

    
    
    
    
