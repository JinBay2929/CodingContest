
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


int n, m, a[200009], b[200009];
bool visited[100009];
vector<int> g[100009];


void dfs(int pos){
  visited[pos]=true;
  for(int i=0; i<g[pos].size(); i++){
    int nex=g[pos][i];
    if(visited[nex]==false){
      dfs(nex);
    }
  }
}

int main(){
  cin>>n>>m;

  for(int i=1; i<=m; i++){
    cin>>a[i]>>b[i];

    g[a[i]].push_back(b[i]);
    g[b[i]].push_back(a[i]);
  }

  for(int i=1; i<=n; i++){
    visited[i]=false;
  }

  dfs(1);

  for(int i=1; i<=n; i++){
    if(visited[i]==false){
      cout<<"The graph is not connected. "<<endl;
      break;
    }
    if(i==n)cout<<"The graph is connected. "<<endl;
  }


  

  return 0;
}
    
