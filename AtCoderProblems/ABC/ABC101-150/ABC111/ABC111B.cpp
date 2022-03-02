
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
  int n, ans;
  cin>>n;

  if(n%111==0){
    ans=n;
  }else{
    ans=(n/111 + 1)*111;
  }

  cout<<ans<<endl;
  
  return 0;
}
    

    
    
    
    
