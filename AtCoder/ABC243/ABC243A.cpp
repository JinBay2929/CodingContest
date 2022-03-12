
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
  int v, a, b, c;
  string ans;
  cin>>v>>a>>b>>c;

 while(true){
   if(v<a){
     ans="F";
     break;
   }
   v-=a;
   if(v<b){
     ans="M";
     break;
   }
   
   v-=b;
   if(v<c){
     ans="T";
     break;
   }
   
   v-=c;
   

 }
  

  cout<<ans<<endl;
  
  return 0;
}
    

    
    
    
    
