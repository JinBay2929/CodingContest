
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
  int n, p[3000][2], ans=0;
  cin>>n;

  for(int i=0; i<n; i++){
    cin>>p[i][0]>>p[i][1];
  }

  for(int i=0; i<n-1; i++){
    for(int j=i+1; j<n; j++){
      int qx=p[j][0]-p[j][1]+p[i][1];
      int qy=p[j][1]-p[i][0]+p[j][0];
      int rx=p[i][0]-p[j][1]+p[i][1];
      int ry=p[i][1]-p[i][0]+p[j][0];

      int sq=(qx-rx)*(qx-rx)+(qy-ry)*(qy-ry);

      if(ans>sq){
        continue;
      }

      int cnt=0;
      for(int k=0; k<n; k++){
        if((p[k][0]==qx&&p[k][1]==qy) || (p[k][0]==rx&&p[k][1]==ry)){
          cnt++;
          if(cnt==2){
            ans=max(ans, sq);
            break;
          }
        }
      }


      
    }
  }

  

  cout<<ans<<endl;
  
  return 0;
}
    

    
    
    
    
