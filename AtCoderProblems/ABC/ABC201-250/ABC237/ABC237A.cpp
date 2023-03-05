
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

//初のABCで8WAした悲しみの問題

ll n, tmp;
string ans;

int main(){
  cin>>n;

  tmp=pow(2,31);

  if(-1*tmp<=n && n<tmp){
    ans="Yes";
  }
  else{
    ans="No";
  }

  cout<<ans<<endl;

  


}
    
