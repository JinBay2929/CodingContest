
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

ll n, x[100009], y[100009];


int main(){
  cin>>n;

  for(int i=1; i<=n; i++)cin>>x[i]>>y[i];
  
  sort(x+1, x+n+1);
  sort(y+1, y+n+1);

  //sortした後にちょうどど真ん中になる点ansx,ansyを出す。
  //nが偶数の時は中点。
  ld ansx, ansy;
  ll ans=0;
  if(n%2==1){
    ansx=x[n/2+1];
    ansy=y[n/2+1];
  }
  else{
    ansx=(x[n/2]+x[n/2+1])/2;
    ansy=(y[n/2]+y[n/2+1])/2;
  }

  for(int i=1; i<=n; i++){
    ans+=abs(ansx-x[i]);
    ans+=abs(ansy-y[i]);
  }
  // cout<<ansx<<endl;
  // cout<<ansy<<endl;
  cout<<ans<<endl;

  return 0;
}
    
