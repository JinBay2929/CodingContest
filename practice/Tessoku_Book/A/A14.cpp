
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


int n, k;
int a[1009], b[1009], c[1009], d[1009];
int ab[1000009], cd[1000009];
string ans="No";

int main(){
  cin>>n>>k;
  
  for(int i=1; i<=n; i++)cin>>a[i];
  for(int i=1; i<=n; i++)cin>>b[i];
  for(int i=1; i<=n; i++)cin>>c[i];
  for(int i=1; i<=n; i++)cin>>d[i];

  for(int i=1; i<=n; i++){
    for(int j=1; j<=n; j++){
      ab[n*(i-1)+j]=a[i] + b[j];
      cd[n*(i-1)+j]=c[i] + d[j];
    }
  }

  sort(cd+1, cd+n*n+1);

  for(int i=1; i<=n*n; i++){
    //pをfindで導出してほぼ同じように書くとTLE。
    //ざっくり位置を出す⇒厳密に調べるという流れの方が計算量は減りそう
    int p = lower_bound(cd+1, cd+n*n+1, k-ab[i]) - cd;
    if(p<n*n+1 && cd[p] == k-ab[i]){
      ans="Yes";
      break;
    }
  }

  cout<<ans<<endl;

  return 0;
}

    
    
    
    
