
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





int  h, w, a[109][109];
vector<string> s;

int main(){
  cin>>h>>w;
  for(int i=1; i<=h; i++){
    for(int j=1; j<=w; j++){
      cin>>a[i][j];
    }
  }

  for(int i=1; i<=h; i++){
    string tmp="";
    for(int j=1; j<=w; j++){
      if(a[i][j]==0){
        tmp+='.';
      }
      else{
        tmp+=('A'+a[i][j]-1);
      }
    }

    s.push_back(tmp);
  }

  for(int i=0; i<(int)s.size(); i++){
    cout<<s[i]<<endl;
  }

  
  

  


  return 0;

}
    
