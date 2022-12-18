
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


long long n, n1, n2, n3;
long long ans;

int main(){
  cin>>n;

  n1=n/3;
  n2=n/5;
  n3=n/15;

  ans=n1+n2-n3;

  cout<<ans<<endl;
  

  return 0;
}
    
