
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


ll n, ans=0;
ll num[200009]; //和がiになるa,bの組み合わせ数（a,b>=1）

int main(){
  cin>>n;

  for(int i=1; i<=n; i++){
    ll tmp=0;
    for(int j=1; j*j<=i; j++){
      if(i%j==0){
        tmp++;
        if(j!=(i/j))tmp++;
      }
    }
    num[i]=tmp;

  }

  for(int i=1; i<=n; i++){
    ans+=(num[i]*num[n-i]);

  }
  cout<<ans<<endl;



  
}
    
