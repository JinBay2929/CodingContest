
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


int n, q;
ll x[100009], y[100009], Q[100009];
vector<ll> xs(100009), ys(100009);

int main(){
  cin>>n>>q;

  for(int i=1; i<=n; i++) {
      cin >> x[i] >> y[i];
  }
  for(int i=1; i<=q; i++) {
      cin >>Q[i];
  }

  for(int i=1; i<=n; i++) {
    //Dmanhattan=|xa−xb|+|ya−yb|を変形していくと、x'=x-y,y'=x+y
    //と変換すると
    //Dmanhattan=max(y′a−y′b,x′a−x′b,−x′a+x′b,−y′a+y′b)
    //=max(|x′a−x′b|,|y′a−y′b|)、
    //今回のケースではx'軸、y'軸での最大最小点を考えて
    //Dmax=max(|x′−x′max|,|x′−x′min|,|y′−y′max|,|y′−y′min|))
    //を計算すればOKになる
      xs[i] = x[i] - y[i];
      ys[i] = x[i] + y[i];
  }
  ll min_x = *min_element(xs.begin(), xs.end());
  ll max_x = *max_element(xs.begin(), xs.end());
  ll min_y = *min_element(ys.begin(), ys.end());
  ll max_y = *max_element(ys.begin(), ys.end());

  for(int i=1; i<=q; i++) {
      int j;
      j=Q[i];
      ll res = max(max(abs(xs[j] - min_x), abs(xs[j] - max_x)), max(abs(ys[j] - min_y), abs(ys[j] - max_y)));
      cout << res << endl;
  }




  return 0;
}
    
