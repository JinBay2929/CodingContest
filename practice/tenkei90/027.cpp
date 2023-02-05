
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
string s[100009];
vector<int> ans;
set<string> lis;



int main(){
  cin>>n;
  for(int i=1; i<=n; i++)cin>>s[i];

  for(int i=1; i<=n; i++){
    if(!lis.count(s[i])){
      lis.insert(s[i]);
      ans.push_back(i);
    }
  }

  for(int i : ans){
    cout<<i<<endl;
  }
 
  

  
  return 0;
}
    
