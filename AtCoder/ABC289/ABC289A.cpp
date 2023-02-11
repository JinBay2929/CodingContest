
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

string s;



int main(){
  cin>>s;
  int len=s.size();
  
  for(int i=0; i<len; i++){
    if(s[i]=='0')s[i]='1';
    else if(s[i]='1')s[i]='0';
  }

  cout<<s<<endl;


 
  return 0;
}
    
