
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

//愚直解。当然TLE

string s, t;
bool ans;

int main(){
  cin>>s>>t;

  int lens=s.size(), lent=t.size();


  
    for(int x=0; x<lent+1; x++){
      ans=true;
      int cnt=0;
      for(int j=0; j<x; j++){
          if(t[j]!=s[j] && t[j]!='?' && s[j]!='?'){
          ans=false;
          break;
        }
        cnt++;
      }

      for(int j=x+lens-lent; j<lens; j++){
          if(t[cnt]!=s[j] && t[cnt]!='?' && s[j]!='?'){
          ans=false;
          break;
        }
        cnt++;
      }


      
    if(ans)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    }

  

  
  return 0;
}
    
