
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

#include<cmath>
#include<map>
#include <sstream>

using namespace std;   



int main() {
  int a, b;
  string ans="Yes";
  cin>>a>>b;

  if(a%2==0 || b%2==0){
    ans="No";
  }
  cout<<ans<<endl;
  return 0;
}
    

    
    
    
    
