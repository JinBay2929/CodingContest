
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


ll a, b, ans;

ll gcd(ll a, ll b){
  while(a>=1 && b>=1){
    if(a>b){
      a%=b;
    }
    else{
      b%=a;
    }
  }

  return max(a, b);
}

int main(){
  cin>>a>>b;

  cout<<a/gcd(a, b) * b<<endl;
  
   
  return 0;
}
    
