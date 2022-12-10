
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
string ans="No";
int len;

bool isOomoji(char c){
  if('A'<=c && c<='Z')return true;
  else return false;
}

bool isNumber(string s){
  bool flag=true;
  for(int i=0; i<6; i++){
    if(i==0){
      if('1'>s[i] || s[i]>'9'){
        flag=false;
      }
      
    }
    else{
      if('0'>s[i] || s[i]>'9')flag=false;
    }
    
  }
  
  return flag;
}

int main(){
  cin>>s;
  len=s.size();


  if(len==8){
    if(isOomoji(s[0]) && isOomoji(s[len-1])){
      if(isNumber(s.substr(1, 6))){
        ans="Yes";
      }
    }
  }

  cout<<ans<<endl;
  
  return 0;
}
    
