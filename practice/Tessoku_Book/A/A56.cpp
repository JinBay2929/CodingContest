
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


long long  n, q;
string s;
long long  a[200009],b[200009],c[200009],d[200009];


// ハッシュ値を計算するための変数
//解説より拝借。
long long mod = 2147483647;  //適当な素数
long long T[200009], H[200009]; //T:文字を数字にした。H:ハッシュ値
long long Power100[200009];  //100のn乗を事前に用意。余りも取ったもの。


// S[l, r] のハッシュ値を返す関数
// 余りの計算に注意！（5.3 節）
long long Hash_value(int l, int r) {
	long long val = H[r] - (H[l - 1] * Power100[r - l + 1] % mod);
	if (val < 0) val += mod;
	return val;
}


int main(){
  cin>>n>>q;
  cin>>s;

  for(int i=1; i<=q; i++){
    cin>>a[i]>>b[i]>>c[i]>>d[i];
  }

  for(int i=1; i<=n; i++){
    T[i]=s[i-1]-'a';
  }

  Power100[0]=1;
  for(int i=1; i<=n; i++){
    Power100[i]=100LL * Power100[i-1] % mod;
  }

  H[0]=0;
  for(int i=1; i<=n; i++){
    H[i]=(100LL * H[i-1] + T[i]) % mod;
  }

  for(int i=1; i<=q; i++){
    long long hash1 = Hash_value(a[i], b[i]);
    long long hash2 = Hash_value(c[i], d[i]);

    if(hash1==hash2)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;

    // cout<<hash1<<endl;
    // cout<<hash2<<endl;
  }
  

  return 0;
}
    
