
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


ll a, b, ans, L=1000000000000000000;

int main(){
  cin>>a>>b;

  ll g=gcd(a, b);
  ll na=a/g, nb=b/g;

  //LCM=g*na*nbなので、変形してオーバーフローしないように判定
  if(L/a<nb || L/b<na){
    cout<<"Large"<<endl;
  }
  else{
    
    ans=a*nb;
    cout<<ans<<endl;
  }
  
  return 0;
}
    
