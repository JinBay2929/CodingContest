
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


int n, a[100009], b[100009];
vector<int> g[100009];

bool sumi[100009], sumirev[100009];
ll dist[100009], distrev[100009];
queue<int> q, qrev;

//幅優先を二回やる。
//①1からの最長距離を出す
//②①で出した最遠点から最も離れている点を探索する。その距離が答え。

int main(){
  cin>>n;
  for(int i=1; i<=n-1; i++){
    cin>>a[i]>>b[i];
    g[a[i]].push_back(b[i]);
    g[b[i]].push_back(a[i]);
  }
  for(int i=1; i<=n; i++){
    sumi[i]=false;
    dist[i]=2'000'000'000;
  }

  q.push(1);
  dist[1]=1;
  sumi[1]=true;

  while(!q.empty()){
    int pos=q.front();
    q.pop();

    for(int i=0; i<g[pos].size(); i++){
      int nex=g[pos][i];
      if(sumi[nex]) continue;

      dist[nex]=min(dist[nex], dist[pos]+1);
      sumi[nex]=true;
      q.push(nex);

    }
  }

  //1からの距離が最大になる場所m
  int m=0;
  for(int i=1; i<=n; i++){
    if(dist[i]>dist[m]){
      m=i;
    }
  }


  for(int i=1; i<=n; i++){
    sumirev[i]=false;
    distrev[i]=2'000'000'000;
  }

  qrev.push(m);
  distrev[m]=1;
  sumirev[m]=true;

  while(!qrev.empty()){
    int pos=qrev.front();
    qrev.pop();

    for(int i=0; i<g[pos].size(); i++){
      int nex=g[pos][i];
      if(sumirev[nex]) continue;

      distrev[nex]=min(distrev[nex], distrev[pos]+1);
      sumirev[nex]=true;
      qrev.push(nex);

    }
  }

  ll ans=0;
  for(int i=1; i<=n; i++){
    ans=max(ans, distrev[i]);
  }


  cout<<ans<<endl;


  
  return 0;
}
    
