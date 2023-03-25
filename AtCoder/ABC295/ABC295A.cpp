
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

ll n;
string s[109];
bool ans=false;

int main(){
  cin>>n;
  for(int i=1; i<=n; i++){
    cin>>s[i];
  }


  for(int i=1; i<=n; i++){
    if(s[i]=="and" || s[i]=="not" || s[i]=="that" || s[i]=="the" || s[i]=="you" ){
      ans=true;
    }
  }
  
  if(ans){
    cout<<"Yes"<<endl;
  }else{
    cout<<"No"<<endl;
  }
  

  


  return 0;

}
    
