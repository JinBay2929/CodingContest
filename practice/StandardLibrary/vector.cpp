
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

#include<cmath>
#include<map>
#include <sstream>
#include<ctime>
#include<queue>
#include<set>
#include <cassert>
#include <numeric>
using namespace std;   


int main(){
  vector<int> a;

  for(int i=0; i<3; i++){
    int j;
    cin>>j;
    a.push_back(j);
  }

  sort(a.begin(), a.end(), greater<int>());

  for(int i=0; i<3; i++){
    cout<<a[i]<<endl;
  }

  return 0;
}
    

    
    
    
    
