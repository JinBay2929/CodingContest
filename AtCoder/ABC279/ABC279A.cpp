
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


string s;
int ans=0;

int main(){
  cin>>s;
  for(int i=0; i<s.length(); i++){
    if(s[i]=='w'){
      ans+=2;
    }else if(s[i]=='v'){
      ans+=1;
    }
  }

  cout<<ans<<endl;

  return 0;
}
    

    
    
    
    
