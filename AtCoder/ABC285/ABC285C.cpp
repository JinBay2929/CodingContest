
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


long long ans=0, tw[17];
string s;

int main(){
  cin>>s;
  int len=s.size();

  tw[0]=1;
  for(int i=1; i<=16; i++){
    tw[i]=tw[i-1]*26;
  }

  //reverse使う方が速い絶対

  for(int i=len-1; i>=0; i--){
    int tmp=-'A'+s[len-i-1]+1;

    

    ans+=tmp*tw[i];
  }


  cout<<ans<<endl;

  

  return 0;
}
    
