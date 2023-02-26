
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



ll n, m;
ll x[200009], y[200009];
bool visited[200009];
vector<ll> g[200009];
vector<int> keiro;

void dfs(int pos){
  visited[pos]=true;
  keiro.push_back(pos);
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
    cin>>x[i]>>y[i];

    g[x[i]].push_back(y[i]);
  }
  for(int i=1; i<=m; i++){
    sort(g[i].begin(), g[i].end());
    g[i].erase(unique(g[i].begin(), g[i].end()), g[i].end());
  }

  for(int i=1; i<=n; i++){
    visited[200009]={0};
    if((int)g[i].size()==0)continue;
    dfs(i);
  }

  bool flag=true;
  for(int i=1; i<=n; i++){
    
    if(visited[i]==false){
      flag=false;
      break;
    }
  }

  if(flag){
    cout<<"Yes"<<endl;
    for(int i=0; i<(int)keiro.size(); i++){
      if(i>0)cout<<" ";
      cout<<keiro[i];
    }
    cout<<endl;
  }
  else{
    cout<<"No"<<endl;
  }

  

 
  


  
	return 0;
}
    
