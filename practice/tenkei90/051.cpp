
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


ll n, k;
ll p, a[49], ans;

vector<ll> lis1[100], lis2[100]; 
//i個選択したときの和をlis[i]のvectorに入れていく

int main(){
  cin>>n>>k>>p;

  for(int i=0; i<n; i++)cin>>a[i];
 
  int mid=n/2;
  for(int i=0; i<(1<<mid); i++){
    ll cnt=0, sum=0;
    for(int j=0; j<mid; j++){
      ll wari=(1<<j); 
      if((i/wari)%2==1){
        cnt++;
        sum+=a[j];
      }
    }

    lis1[cnt].push_back(sum);
  }

  for(int i=0; i<(1<<(n-mid)); i++){
    ll cnt=0, sum=0;
    for(int j=0; j<n-mid; j++){
      ll wari=(1<<j); 
      if((i/wari)%2==1){
        cnt++;
        sum+=a[mid+j];
      }
    }

    lis2[cnt].push_back(sum);
  }

  //k個選択し、かつ和がp以下のものの数を出す
  //⇒ソートしてからlower_boundで効率よく個数カウントができる
  for (int i = 0; i <= n; i++) {
		sort(lis1[i].begin(), lis1[i].end());
		sort(lis2[i].begin(), lis2[i].end());
	}
	for (int h = 0; h <= k; h++) {
		for (int i = 0; i < (int)lis1[h].size(); i++) {
      //選択した個数がkになるようにlis2を調整。
			int pos1 = lower_bound(lis2[k-h].begin(), lis2[k-h].end(),
         p-lis1[h][i]+1) - lis2[k-h].begin();
			ans += (long long)pos1;
		}
	}

  cout<<ans<<endl;
 
  return 0;
}
    
