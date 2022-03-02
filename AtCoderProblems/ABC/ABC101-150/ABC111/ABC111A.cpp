
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
  string n;
  cin>>n;

  for(int i=0; i<3; i++){
    if(n[i]=='1'){
      n[i]='9';
    }else if(n[i]=='9'){
      n[i]='1';
    }
  }

  cout<<n<<endl;
  
  return 0;
}
    

    
    
    
    
