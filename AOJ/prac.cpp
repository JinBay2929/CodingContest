
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

ll n, m, k;
ll a[50009], b[50009], c[50009], d[50009]; 
ld ans;

vector<ld> ab, cd;


int main(){
  cin>>n>>m>>k;
  for(int i=1; i<=n; i++){
    cin>>a[i]>>b[i];
  }
  for(int i=1; i<=m; i++){
    cin>>c[i]>>d[i];
  }

  for(int i=1; i<=n; i++){
    ld tmp;
    tmp=a[i]*100/(a[i]+b[i]);
    ab.push_back(tmp);
  }

  for(int i=1; i<=m; i++){
    ld tmp;
    tmp=c[i]*100/(c[i]+d[i]);
    cd.push_back(tmp);
  }

  sort(ab.begin(), ab.end());
  sort(cd.begin(), cd.end());


  ll abl=0, abr=n-1;
  ll cdl=0, cdr=m-1;


  
  
  

  


  return 0;

}
    
