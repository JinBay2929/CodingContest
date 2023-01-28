
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


int n, cnt=0, f=0;
string s[109];


int main(){
  cin>>n;
  for(int i=1; i<=n; i++){
    cin>>s[i];
  }
  
  for(int i=1; i<=n; i++){
    if(s[i]=="For")cnt++;
    else f++;
  }

  if(cnt>=f)cout<<"Yes"<<endl;
  else cout<<"No"<<endl;
  

   
  return 0;
}
    
