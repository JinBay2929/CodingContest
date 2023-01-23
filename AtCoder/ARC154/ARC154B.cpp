
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

//WAから抜けられず終了。。

long long n;
string s, t;
bool flag=true;
int alps[29], alpt[29];


bool check(string s, string t, int n){
  bool ans=true;
  for(int i=0; i<n; i++){
    if(s[i]!=t[i]){
      ans=false;
      break;
    }
  }

  return ans;
  }


int main(){
  cin>>n>>s>>t;

  for(int i=0; i<n; i++){
    alps[s[i]-'a']++;
    alpt[t[i]-'a']++;
  }

  for(int i=0; i<26; i++){
    if(alps[i]!=alpt[i]){
      flag=false;
      break;
    }
  }


  if(flag==false){
    cout<<"-1"<<endl;
  }
  else{
    if(check(s, t, n)==true){
      cout<<"0"<<endl;
    }
    else{
      int ans=0;

      t+=t;
      for(int i=n-1; i>=0; i--){
        int j=0;
        while(s[i]!=t[n+i-j]){
          j++;
        }

        ans=max(ans, j);
      }

      cout<<ans<<endl;
    }
  }

 

  

  
   
  return 0;
}
    
