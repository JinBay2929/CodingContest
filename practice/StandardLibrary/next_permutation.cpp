
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
  int n=3;
  vector<int> a={1,2,3}; 
  
  
  do {
      for (int i = 0; i < n; i++) {
          if (i) cout << ",";
          cout << a[i];
      }
      cout << endl;
  } while(next_permutation(a.begin(), a.end()));
  return 0;
}
    

    
    
    
    
