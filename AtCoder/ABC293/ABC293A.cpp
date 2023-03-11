
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


string s, ans;


int main(){
  cin>>s;

  ans=s;
  int ls=s.size();

  for(int i=0; i<ls; i++){
    if(i%2==0)ans[i+1]=s[i];
    else ans[i-1]=s[i];
  }

  cout<<ans<<endl;


  return 0;

}
    
