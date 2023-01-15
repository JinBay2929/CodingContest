
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


int n;
string s;

int main(){
  cin>>n;
  cin>>s;



  for(int i=1; i<=n-1; i++){
    int cnt=0;

    for(int j=1; j<=n-i; j++){
      if(s[j-1]!=s[j-1+i]){
        cnt++;
      }else{
        break;
      }

    }

    cout<<cnt<<endl;
  }

  

  return 0;
}
    
