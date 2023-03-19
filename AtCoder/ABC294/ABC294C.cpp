
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



ll n, m;
ll a[100009], b[100009];
ll ansa[100009], ansb[100009];
vector<pair<ll, ll>> c;

int main(){
  cin>>n>>m;
  for(int i=1; i<=n; i++){
      cin>>a[i];
  }
  for(int i=1; i<=m; i++){
      cin>>b[i];
  }

  for(int i=1; i<=n; i++){
    c.push_back(make_pair(a[i], i));
  }
  for(int i=1; i<=m; i++){
    c.push_back(make_pair(b[i], i));
  }

  sort(c.begin(), c.end());

  for(ll i=0; i<n+m; i++){
    if(a[c[i].second]==c[i].first){
      ansa[c[i].second]=i+1;
    }
    else{
      ansb[c[i].second]=i+1;
    }
  }

  for(int i=1; i<=n; i++){
    if(i>1)cout<<" ";
    cout<<ansa[i];
  }
  cout<<endl;

  for(int i=1; i<=m; i++){
    if(i>1)cout<<" ";
    cout<<ansb[i];
  }
  cout<<endl;

  
  

  


  return 0;

}
    
