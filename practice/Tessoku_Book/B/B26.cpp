
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

//自力でエラトステネス実装できた。

int n;
bool deleted[1000009];

int main(){
  cin>>n;

  deleted[1]=true;
  for(int i=2; i*i<=n; i++){
    for(int j=i*2; j<=n; j+=i){
      deleted[j]=true;
    }
  }

  for(int i=2; i<=n; i++){
    if(deleted[i]==false)cout<<i<<endl;
  }
  
  
   
  return 0;
}
    
