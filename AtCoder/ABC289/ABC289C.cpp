
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

using ll=long long;
using ld=long double;
#define PI (ld)3.14159265358979

int n, m, c[19];
int a[19][19];
bool flag;
int ans=0;


int main(){
  cin>>n>>m;

  for(int i=1; i<=m; i++){
    cin>>c[i];
    for(int j=1; j<=c[i]; j++){
      cin>>a[i][j];
    }
  }

  for(int i=1; i<(1<<m); i++){
    set<int> s;
    for(int j=0; j<m; j++){
      if((i/(1<<j))%2==1){

        for(int k=1; k<=c[j+1]; k++){
          s.insert(a[j+1][k]);
        }
   
      }
    }

    
  
    
    
    flag=true;
    for(int j=1; j<=n; j++){
      if(!s.count(j)){
        flag=false;
      
      }
    }

    if(flag)ans++;
  }


  cout<<ans<<endl;
  
 

 
  return 0;
}
    
