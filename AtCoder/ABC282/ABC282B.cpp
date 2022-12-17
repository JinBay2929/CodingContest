
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


int n, m;
string s[39];
int ans=0;

int main(){
  cin>>n>>m;

  for(int i=1; i<=n; i++){
    cin>>s[i];
  }

  for(int i=1; i<=n-1; i++){
    for(int j=i+1; j<=n; j++){
      int poi=0;
      for(int k=0; k<m; k++){
        if(s[i][k]=='o' || s[j][k]=='o')poi++;
      }

      if(poi==m){
        ans++;
      }
    }
  }



  cout<<ans<<endl;

  return 0;
}
    
