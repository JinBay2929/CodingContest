
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



int n, m, a[19];
int x[109], y[109], z[109], dist[1500];
vector<int> g[1500];

//遷移後の状態番号を返す関数
int getnext(int pos, int idx){
  int state[19];

  //ランプは１番から始まるのでstateは1から
  for(int i=1; i<=n; i++){
    int wari= (1<<(i-1));
    state[i]=(pos/wari) %2;
  }

  //onoffを入れ替える
  state[x[idx]]=1-state[x[idx]];
  state[y[idx]]=1-state[y[idx]];
  state[z[idx]]=1-state[z[idx]];


  int ret=0;
  for(int i=1; i<=n; i++){
    if(state[i]==1){
      ret+=(1<<(i-1));
    }
  }

  return ret;

}

int main(){

  cin>>n>>m;
  for(int i=1; i<=n; i++)cin>>a[i];
  for(int i=1; i<=m; i++){
    cin>>x[i]>>y[i]>>z[i];
  }

  for(int i=0; i<(1<<n); i++){ //全部の頂点番号(10進数)について
    for(int j=1; j<=m; j++){ //全パターンの遷移を試す
      int NextState = getnext(i, j);
      g[i].push_back(NextState);
    }
  }


  // スタート地点・ゴール地点の頂点番号を求める
	int goal = (1 << n) - 1;  
	int start = 0;
	for (int i = 1; i <= n; i++) {
		if (a[i] == 1) start += (1 << (i - 1));
	}

  queue<int> q;
  for (int i = 0; i < (1 << n); i++) dist[i] = -1;
  dist[start]=0;
  q.push(start);

  while(!q.empty()){
    int pos=q.front();
    q.pop();

    for(int i=0; i<g[pos].size(); i++){
      int nex=g[pos][i];
      if(dist[nex]==-1){
        dist[nex]=dist[pos]+1;
        q.push(nex);
      }
    }
  }
  

  cout<<dist[goal]<<endl;


  
  
  
  

  return 0;
}
    
