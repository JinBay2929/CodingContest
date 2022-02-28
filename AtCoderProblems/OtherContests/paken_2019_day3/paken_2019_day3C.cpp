
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
  int n, m;
  long long ans;
  int music[100][100];

  cin>>n>>m;

  for(int i=0; i<n; i++){
    for(int j=0; j<m; j++){
      cin>>music[i][j];
    }
  }

  ans=0;
  
  for(int j=0; j<m-1; j++){
    for(int k=j+1; k<m; k++){
      long long  tmp=0;
      for(int i=0; i<n; i++){
        tmp+=max(music[i][j], music[i][k]);
      }
      ans=max(ans, tmp);
    }
  }
  
  cout<<ans<<endl;

  return 0;
}
    

    
    
    
    
