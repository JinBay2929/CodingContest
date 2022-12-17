
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


int n, counter;
string s;
vector<char> ans;

int main(){
  cin>>n;
  cin>>s;

  
  for(int i=0; i<n; i++){
    if(s[i]=='"')counter++;
    if(counter%2==0){
      if(s[i]==','){
        ans.push_back('.');
      }else{
        ans.push_back(s[i]);
      }
    }else{
      ans.push_back(s[i]);
    }
    
  }

  for(int i=0; i<n; i++){
    cout<<ans[i];
  }
  
  cout<<endl;
  return 0;
}
    
