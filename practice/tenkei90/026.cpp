
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
int col[100009]; //色は1or2。
vector<int> g[100009], ans1, ans2;


void dfs(int pos, int cur) {
	col[pos] = cur;
	for (int i : g[pos]) {
		if (col[i] >= 1) continue;
		dfs(i, 3 - cur);  //3-1=2,3-2=1なので逆の色でぬれる
	}
}


int main(){
  cin>>n;
  for(int i=1; i<=n-1; i++)cin>>a[i]>>b[i];


  for(int i=1; i<=n-1; i++){
    g[a[i]].push_back(b[i]);
    g[b[i]].push_back(a[i]);
  }

  dfs(1,1);

  for(int i=1; i<=n; i++){
    if(col[i]==1)ans1.push_back(i);
    if(col[i]==2)ans2.push_back(i);
  }

  if(ans1.size()>ans2.size()){
    for(int i=0; i<n/2; i++){
      if(i!=0)cout<<" ";
      cout<<ans1[i];
    }
    cout<<endl;
  }
  else{
    for(int i=0; i<n/2; i++){
      if(i!=0)cout<<" ";
      cout<<ans2[i];
    }
    cout<<endl;
  }
  

  


  

  
  return 0;
}
    
