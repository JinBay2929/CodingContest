
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

bool goodStr(string s){
  int cntf=0, cntb=0, l=0, sl=s.size();
  bool ans=true;

  for(int i=0; i<sl; i++){
    if(s[i]=='(')cntf++;
    else if(s[i]==')')cntb++;
    else if(s[i]<'a' || s[i]>'z')ans=false;
  }

  if(cntf!=cntb)ans=false;

  return ans;
}



int h, w, a[1009][1009], ans;
int hsum[1009];

int main(){
  cin>>h>>w;

  for(int i=1; i<=h; i++){
    for(int j=1; j<=w; j++){
      cin>>a[i][j];

      hsum[i]+=a[i][j];
    }
  }

  for(int i=1; i<=h; i++){
      hsum[i]
  }

  

  
  cout<<ans<<endl;


  return 0;
}
    
