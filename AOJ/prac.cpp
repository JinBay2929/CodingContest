
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


string s, t;
int l[300009], r[300009];
bool ans;

int main(){
  cin>>s>>t;

  int lens=s.size(), lent=t.size();

  int cnt=0;
  for(int i=0; i<lent; i++){
    if(s[i]==t[i]|| s[i]=='?' || t[i]=='?'){
      cnt++;
      l[i]=cnt;
    }
    else{
      break;
    }
  }

  cnt=0;
  for(int i=lent-1; i>0; i--){
    if(s[i+lens-lent]==t[i]|| s[i]=='?' || t[i]=='?'){
      cnt++;
      r[i]=cnt;
    }
    else{
      break;
    }
  }


  
  for(int x=0; x<lent+1; x++){
    int tmp=0;
    if(x==0){
       tmp=(r[lens-x]);
    }else if(x==lent){
      tmp=(r[lens-x]);
    }else{
      tmp=(l[x]+r[lens-x]);
    }
    

    if(tmp==lent)ans=true;
    else ans=false;
  if(ans)cout<<"Yes"<<endl;
  else cout<<"No"<<endl;
  }

  

  
  return 0;
}
    
