
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

//TLE取れず。

//aのb乗をmで割った余り
ll modpow(ll a, ll b, ll m) {
  a%=m;

	ll p = 1, q = a;
	for (int i = 0; i < 63; i++) {
		if ((b & (1LL << i)) != 0) {
			p *= q;
			p %= m;
		}
		q *= q;
		q %= m;
	}
	return p;
}


ll a, x, m;
ll ans;
set<ll> s;
vector<ll> lis;

int main(){
  cin>>a>>x>>m;

  ll p=a;
  for(ll i=0; i<=x-1; i++){
    ll tmp=p%m;

    if(s.count(tmp))break;
    else{
      lis.push_back(tmp);
      s.insert(tmp);
      p*=a;
      p%=m;
      //cout<<tmp<<endl;
    }
  }
  
  ll len=lis.size();
  ll tmpsum=0;
  for(ll i=0; i<len; i++){
    tmpsum+=lis[i];
    tmpsum%=m;
  }

  ll kai, nokori;
  kai=x/len;
  nokori=x%len;

  ans=tmpsum*kai%m;

  for(ll i=0; i<nokori; i++){
    ans+=lis[i];
    ans%=m;
  }


  cout<<ans<<endl;

  


  return 0;

}
    
