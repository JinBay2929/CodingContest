
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

struct prof{
  int to, di, tree;
};

int n, m;
int a[100009], b[100009], c[100009], d[100009];
vector<prof> g[10009];
int dist[10009], treesum[10009];
int ans;



int main(){
  cin>>n>>m;

  for(int i=1; i<=m; i++){
    cin>>a[i]>>b[i]>>c[i]>>d[i];
  }

  for(int i=1; i<=m; i++){
    g[a[i]].push_back({b[i], c[i], d[i]});
  }

  queue<prof> q;
  q.push({1,0,0});

  while(!q.empty()){
    int pos=q.front().to;
    q.pop();

    for(int i=0; i<g[pos].size(); i++){
      int nex=g[pos][i].to;
      dist[nex]=min(dist[nex], dist[pos]+g[pos][i].di);
      treesum[nex]=
    }
  }
  

  cout<<ans<<endl;
  
  return 0;
}
    
