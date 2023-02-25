
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



ll n;
string s;
vector<pair<ll, ll>> v;


int main(){
  cin>>n>>s;

  ll cnt = 0;
  int len=s.size();

    for (int i=0; i<len; i++) {
        cnt++;
        if (i ==len- 1 || s[i] != s[i + 1]) {
            v.push_back(make_pair(s[i], cnt));
            cnt = 0;
        }
    }

	ll ret = 0;
  int vlen=v.size();
  //〇が続く区間、×が続く区間は何個あるかを足していく
	for (int i = 0; i < vlen; i++) {
		ret += v[i].second * (v[i].second + 1) / 2;
	}

    //余事象
	cout << n * (n + 1) / 2LL - ret << endl;


	return 0;
}
    
