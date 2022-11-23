
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


int main(){
  //bitsetを使うのが最速ではある
  // int n;
  // cin>>n;
  // bitset<12> a(n);
  // cout<<a<<endl;

  int n, wari;
  cin>>n;

  for(int i=9; i>=0; i--){
    wari=(1<<i);
    cout<<(n/wari) %2;
  }

  cout<<endl;
  return 0;
}
    

    
    
    
    
