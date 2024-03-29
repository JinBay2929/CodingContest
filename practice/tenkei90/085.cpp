
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
vector<ll> v;



int main(){
  cin>>n;

  for(ll i=1; i*i<=n; i++){
    if(n%i==0){
      v.push_back(i);
      if(i!=(n/i))v.push_back(n/i);
    }
  }

  sort(v.begin(), v.end());
  ll len=v.size();

  for(ll i=0; i<len; i++){
    for(ll j=i; j<len; j++){
      ll a=v[i], b=v[j], c;
      if(n/a<b) continue;  //a*b>ならば飛ばすことと同義。
      if(n%(a*b)!=0) continue; //約数cが残らないならばcontinue

      c=n/a/b;
      if(c>=b)ans++;
    }
  }

  cout<<ans<<endl;
	return 0;
}
    
