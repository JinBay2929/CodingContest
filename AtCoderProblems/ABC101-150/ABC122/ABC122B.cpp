
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

#include<cmath>
#include<map>
#include <sstream>
#include<ctime>
#include<queue>
#include<set>
#include <cassert>
#include <numeric>
using namespace std;   



int main(){
  string s;
  int ans=0;
  cin>>s;

  int tmp=0;
  for(int i=0; i<s.length(); i++){
    if(s[i]=='A'||s[i]=='T'||s[i]=='G'||s[i]=='C'){
      tmp++;
    }else{
      tmp=0;
    }
    ans=max(ans, tmp);
  }
  cout<<ans<<endl;

  return 0;
}
    

    
    
    
    
