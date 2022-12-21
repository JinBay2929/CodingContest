
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


long long  n, m, b;
long long  a[200009], c[200009];
long long suma=0, sumc=0, ans;

int main(){
  cin>>n>>m>>b;

  for(int i=1; i<=n; i++)cin>>a[i];
  for(int i=1; i<=m; i++)cin>>c[i];

  for(int i=1; i<=n; i++)suma+=a[i];
  for(int i=1; i<=m; i++)sumc+=c[i];


  ans=b*n*m + sumc*n + suma*m;

  cout<<ans<<endl;
  

  return 0;
}
    
