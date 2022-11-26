
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
using namespace std;   


string s, t, ans="No";
bool flag=true;

int main(){
  cin>>s>>t;
  int sl=s.length(), tl=t.length();
  if(sl>=tl){
    for(int i=0; i<=sl-tl; i++){
      flag=true;
      if(s[i]==t[0]){
        for(int j=0; j<tl; j++){
          if(s[i+j]!=t[j]){
            flag=false;
            break;
          }
        }
        if(flag==true){
          ans="Yes";
          break;
        }
      }
      
    }
  }
  

  cout<<ans<<endl;

  return 0;
}
    

    
    
    
    
