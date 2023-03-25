
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

//エラー取れず


string s;
int len;
int l, r;
int ans=0;
set<char> Set;
bool flag=false;

int main(){
  cin>>s;
  len=s.size();

  int tmp, tl, tr;

  for(int l=0; l<len; l++){
    tmp=0;
    for(int r=1; r<=len; r++){
      if(Set.count(s[l])){
        Set.erase(s[l]);
      }
      else{
        Set.insert(s[l]);
      }

      if(Set.empty()){
        flag=true;
        break;
      }
    }

    if(flag){
      tl=l, tr=r;
      ans=1;
      break;
    }
  }

  if(flag){ 
    while(tl<len && tr<=len){
      tr++;
      if(s[tr+1]==s[tl]){
        ans++;
        tl++;
      }
      else{
        Set.insert(s[tl]);
        tl++;
        while(!Set.empty() && tl<tr){
          if(Set.count(s[tl])){
            Set.erase(s[tl]);
          }
          else{
            Set.insert(s[tl]);
          }
        }

      //   if(Set.empty()){
      //     ans++;
      //   }
      // }
    
    }
  }
  }
  

  cout<<ans<<endl;


  return 0;

}
    
