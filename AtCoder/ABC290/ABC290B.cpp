
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

int n, k, cnt=0;
string s, t;


int main(){
  cin>>n>>k>>s;

  t=s;

  for(int i=0; i<n; i++){
    if(s[i]=='o' && cnt<k){
      t[i]='o';
      cnt++;
    }
    else{
      t[i]='x';
    }
  }

  cout<<t<<endl;

  return 0;
}
    
