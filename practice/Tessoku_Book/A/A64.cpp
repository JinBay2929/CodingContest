
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


int n, m, a[100009], b[100009], c[100009];
vector<pair<int, int>> g[100009];

// ダイクストラ法
int cur[100009]; 
bool kakutei[100009];
priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> q;

int main(){
  cin>>n>>m;

  for(int i=1; i<=m; i++){
    cin>>a[i]>>b[i]>>c[i];
    g[a[i]].push_back(make_pair(b[i], c[i]));
    g[b[i]].push_back(make_pair(a[i], c[i]));
  }

  // 配列の初期化
	for (int i = 1; i <= n; i++) kakutei[i] = false;
	for (int i = 1; i <= n; i++) cur[i] = 2000000000;

  cur[1]=0;
  q.push(make_pair(cur[1],1));


  while(!q.empty()){
    int pos=q.top().second;
    q.pop();

    if(kakutei[pos]==true)continue;

    kakutei[pos]=true;

    for(int i=0; i<g[pos].size(); i++){
      int nex = g[pos][i].first;
      int cost = g[pos][i].second;

      if(cur[nex]>cur[pos]+cost){
        cur[nex] = cur[pos]+cost;
        q.push(make_pair(cur[nex], nex));
      }
    }
  }

  for(int i=1; i<=n; i++){
    if (cur[i] == 2000000000) cout << "-1" << endl;
    else cout<<cur[i]<<endl;
  }

  

  return 0;
}
    
