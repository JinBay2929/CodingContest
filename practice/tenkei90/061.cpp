
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

using ll=long long;
using ld=long double;
#define PI (ld)3.14159265358979


int q, t[100009], x[100009];
deque<int> dq;

int main(){
  cin>>q;
  for(int i=1; i<=q; i++)cin>>t[i]>>x[i];

  for(int i=1; i<=q; i++){
    if(t[i]==1){
      dq.push_front(x[i]);
    }
    else if(t[i]==2){
      dq.push_back(x[i]);
    }
    else{
      auto iter=dq.begin()+x[i]-1;
      cout<<*iter << endl;
    }
  }
  
 
  return 0;
}
    
