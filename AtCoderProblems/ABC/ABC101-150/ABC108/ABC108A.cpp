
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

#include<cmath>
#include<map>

using namespace std;   



int main() {
  int k, ans;
  cin >>k;
  
  if(k%2==0){
    ans=(k/2) * (k/2);
  }else{
    ans=(k/2) * (k- k/2);
  }
  

  cout<<ans<<endl;

  return 0;
}
    

    
    
    
    
