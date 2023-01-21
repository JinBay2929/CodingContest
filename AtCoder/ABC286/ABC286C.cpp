
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


//TLE地獄
int n;
long long a, b, ans=100'000'000'000;
string s;

int alp[55];

int kaibun(string s, int zure){
  int len=s.size();
  int miss=0;

  for(int i=0; i<len/2; i++){
      int left=i+zure;
      int right=len-i-1+zure;

      while(left>=len)left-=len;
      while(right>=len)right-=len;
      if(s[left]!=s[right]){
        miss+=1;
      }   
    
  }

  return miss;
}


int main(){
  cin>>n>>a>>b;

  cin>>s;

  //文字を交換する回数は高々n回
  for(int j=0; j<=n; j++){
    int miss=10'000'000;

    for(int i=0; i<n; i++){
      miss=min(miss, kaibun(s, i));
    }

    if(j==miss){
      ans=min(ans, a*miss+b*j);
    }
  
  }

  cout<<ans<<endl;
    
  
   
  return 0;
}
    
