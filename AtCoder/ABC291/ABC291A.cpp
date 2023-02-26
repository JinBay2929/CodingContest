
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



string s;
int ans;


int main(){
  cin>>s;

  for(int i=0; i<(int)s.size(); i++){
    if(s[i]<'a'){
      ans=i+1;
      break;
    }
  }

  cout<<ans<<endl;

	return 0;
}
    
