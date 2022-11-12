
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
using namespace std;   


int main(){
  vector<int> a;

  a.push_back(3);
  a.push_back(10);
  a.push_back(22);

  //lower_bound()はイテレータを返すので、起点との差をとる必要あり。

  cout<<lower_bound(a.begin(), a.end(), 9)-a.begin()<<endl;
  return 0;
}
    

    
    
    
    
