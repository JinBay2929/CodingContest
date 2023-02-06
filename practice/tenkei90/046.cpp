
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


int n;
ll a[100009], b[100009], c[100009];
ll ma[50], mb[50], mc[50]; 
//ma[i]:a mod 46としたときiである物の数

ll ans=0;

int main(){
  cin>>n;

  for(int i=1; i<=n; i++)cin>>a[i];
  for(int i=1; i<=n; i++)cin>>b[i];
  for(int i=1; i<=n; i++)cin>>c[i];

  //全部の数についてmod46をとって個数カウント
  for(int i=1; i<=n; i++){
    ma[a[i]%46]++;
    mb[b[i]%46]++;
    mc[c[i]%46]++;
  }

  
  //余りを足して46の倍数になるような組み合わせならば
  //各個数を掛けてansに加える
  for(int i=0; i<=45; i++){
    for(int j=0; j<=45; j++){
      for(int k=0; k<=45; k++){
        if((i+j+k)%46==0){
          ans+=(ma[i]*mb[j]*mc[k]);
        }
      }
    }
  }

  cout<<ans<<endl;



  


 
  return 0;
}
    
