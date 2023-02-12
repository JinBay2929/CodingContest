
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

ll k;
string n;

ll eight_to_ten(string n){
  int len=n.size();
  ll ret=0;

  for(int i=0; i<len; i++){
    ret = ret*8+(n[i]-'0');
  }
  return ret;
}

string ten_to_nine(ll n){
  if(n==0)return "0";

  string ret="";
  while(n>0){
    int a = n%9;
    string sa(1, a+'0');
    ret=sa + ret;
    n/=9;
  }
  return ret;
}

int main(){
  cin>>n>>k;
  
  for(int i=1; i<=k; i++){
    n=ten_to_nine(eight_to_ten(n));
    
    int len=n.size();
    for(int j=0; j<len; j++){
      if(n[j]=='8')n[j]='5';
    }

    
  }

  cout<<n<<endl;

 
  return 0;
}
    
