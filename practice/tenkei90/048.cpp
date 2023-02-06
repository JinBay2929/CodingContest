
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


int n, k;
ll a[200009], b[200009], ans=0;
vector<ll> vec;

//a[i]/2<b[i]<a[i]より、a[i]-b[i]<b[i]が成り立つ。
//この制約ゆえに、点数が高い順に貪欲に選択していった場合に
//部分点を取ってないけど満点を取りに行くという状況が発生しない

int main(){
  cin>>n>>k;

  for(int i=1; i<=n; i++)cin>>a[i]>>b[i];

  for(int i=1; i<=n; i++){
    vec.push_back(b[i]);
    vec.push_back(a[i]-b[i]);
  }
  sort(vec.begin(), vec.end(), greater<int>());


  for(int i=0; i<k; i++){
    ans+=vec[i];
  }

  cout<<ans<<endl;
 

  


 
  return 0;
}
    
