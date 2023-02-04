
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

int n, m, a[100009], b[100009];
int dist[100009];
vector<int> g[100009];


int main(){
  cin>>n>>m;
  for(int i=1; i<=m; i++){
    cin>>a[i]>>b[i];
    g[a[i]].push_back(b[i]);
    g[b[i]].push_back(a[i]);
  }

  
  return 0;
}
    
