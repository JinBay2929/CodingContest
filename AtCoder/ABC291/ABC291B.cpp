
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



int n;
int x[509];
vector<int> v;

int main(){
  cin>>n;

  for(int i=1; i<=5*n; i++){
    cin>>x[i];
  }
  for(int i=1; i<=5*n; i++){
    v.push_back(x[i]);
  }

  sort(v.begin(), v.end());

  ld tmp=0;
  for(int i=n; i<4*n; i++){
    tmp+=v[i];
  }

  cout<<setprecision(10)<<tmp/3/n<<endl;


  
	return 0;
}
    
