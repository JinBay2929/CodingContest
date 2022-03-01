
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
using namespace std;   

bool judge(int n){
  string sn = to_string(n);
  if(sn.length()%2==0){
    return false;
  }else{
    return true;
  }
}

int main(){
  int n;
  cin>>n;

  int ans=0;
  for(int i=1; i<=n; i++){
    if(judge(i)==true){
      ans++;
    }
  }

  cout<<ans<<endl;
  return 0;
}
    

    
    
    
    
