
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


long long n, k;

int main(){
  cin>>n>>k;
  

  //5*5マスなら5*2-2=8手で右下に行ける
  if(k>=(2*n-2) && k%2==0)cout<<"Yes"<<endl;
  else cout<<"No"<<endl;

  return 0;
}
    
