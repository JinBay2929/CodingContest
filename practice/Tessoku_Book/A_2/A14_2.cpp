
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


int n;
long long k;
long long a[100009], b[100009],c[100009],d[100009];
vector<long long> ab, cd;

string ans="No";


int main(){
  cin>>n>>k;

  for(int i=1; i<=n; i++)cin>>a[i];
  for(int i=1; i<=n; i++)cin>>b[i];
  for(int i=1; i<=n; i++)cin>>c[i];
  for(int i=1; i<=n; i++)cin>>d[i];

  for(int i=1; i<=n; i++){
    for(int j=1; j<=n; j++){
      ab.push_back(a[i]+b[j]);
      cd.push_back(c[i]+d[j]);
    }
  }
  

  sort(ab.begin(), ab.end());
  sort(cd.begin(), cd.end());

  int ablen=ab.size();

  
  
  for(int i=0; i<ablen; i++){
    auto pos=lower_bound(cd.begin(), cd.end(), k-ab[i]);
    
    if(*pos==k-ab[i]){
      ans="Yes";
      break;
    }
  }

  cout<<ans<<endl;
  


   
  return 0;
}
    
