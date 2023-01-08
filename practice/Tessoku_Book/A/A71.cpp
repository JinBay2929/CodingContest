
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



int n,a[69], b[69];
vector<int> va, vb;

int main(){

  cin>>n;
  for(int i=1; i<=n; i++)cin>>a[i];
  for(int i=1; i<=n; i++)cin>>b[i];

  for(int i=1; i<=n; i++){
    va.push_back(a[i]);
    vb.push_back(b[i]);
  }

  //昇順ソート、降順ソートでi番目とn-i+1番目を掛けて中和する～
  //という発想に基づく。
  sort(va.begin(), va.end());
  sort(vb.begin(), vb.end(), greater<int>());

  int ans=0;
  for(int i=0; i<n; i++){
    ans+=(va[i]*vb[i]);
  }

  cout<<ans<<endl;
  
  return 0;
}
    
