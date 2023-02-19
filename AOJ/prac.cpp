
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

int t, n, d, k;


int main(){
  cin>>t;

  for(int i=1; i<=t; i++){
    cin>>n>>d>>k;
    int cycle_len;

    d%=n;
    if(n%d==0){
      cycle_len=n/d;
    }else{
      cycle_len=n/d+1;
    }

    cout<<(k-1)/cycle_len+((k-1)%cycle_len)*d<<endl;


    

  }


  return 0;
}
    
