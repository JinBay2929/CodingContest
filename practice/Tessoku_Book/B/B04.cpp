
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


string n;
int ans=0;


int main(){
  cin>>n;

  int len=n.size();
  for(int i=0; i<=len-1; i++){
    if(n[i]=='1'){
      ans+=(1<<(len-1-i));
    }
  }
  

  cout<<ans<<endl;
  return 0;
}
    
