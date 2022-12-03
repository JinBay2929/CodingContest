
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


long long s[11];
long long sums[11];
int n, ans=0;

int main(){
  cin>>n;
  for(int i=1; i<=n; i++){
    cin>>s[i];
  }

  
  

  for(int i=1; i<=n; i++){
    cout<<s[i]-s[i-1];
    if(i<n)cout<<" ";
  }

  cout<<endl;

  return 0;
}
    
