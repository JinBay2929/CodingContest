
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


//解説ACできてない。座標圧縮をもちいた。
//遅延評価セグ木じゃないと間に合わない

int w, n, l[250009], r[250009], h[250009];
vector<int> comp;

int main(){
  cin.tie(0);
	ios_base::sync_with_stdio(false);
  cin>>w>>n;
  for(int i=1; i<=n; i++)cin>>l[i]>>r[i];

  for(int i=1; i<=n; i++){
    comp.push_back(l[i]);
    comp.push_back(r[i]);
  }
  sort(comp.begin(), comp.end());
  comp.erase(unique(comp.begin(), comp.end()), comp.end());

  for(int i=1; i<=n; i++){
    //+1することで1番目から番目を数えられる
    l[i]=lower_bound(comp.begin(), comp.end(), l[i])-comp.begin()+1;
    r[i]=lower_bound(comp.begin(), comp.end(), r[i])-comp.begin()+1;
  }

  for(int i=1; i<=n; i++){
    //l[i]からr[i]のなかで最大の高さに1加えた数字が新しい高さ
    //※右端は開区間なので右端の数字+1した。
    int height=*max_element(h+l[i], h+r[i]+1)+1;

    //先ほどと同様に右が開区間であることを考慮し新しい高さで埋める
    fill(h+l[i], h+r[i]+1, height);
    cout<<height<<endl;
  }
  
  return 0;
}
    
