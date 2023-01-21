
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
#include <iomanip>
using namespace std;   

int n;
string s;
vector<char> ans;

int main(){
  cin>>n;
  cin>>s;
  

  for(int i=0; i<n; i++){
    if(s[i]!='n')ans.push_back(s[i]);
    else{
      if(i<n && s[i+1]=='a'){
        ans.push_back('n');
        ans.push_back('y');
        ans.push_back('a');
        i++;
      }
      else{
        ans.push_back('n');
      }
    }
  }

  int len=ans.size();

  for(int i=0; i<len; i++){
    cout<<ans[i];
  }
  cout<<endl;

  
   
  return 0;
}
    
