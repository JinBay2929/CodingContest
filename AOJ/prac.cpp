
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

//有向グラフのDFSと解釈。
//各始点から掘っていき、全部の点を網羅していれば一意に定まる。
//ただ全部の点を通るかは幅優先でしかやったことがないので実装ができず。

ll n, m;
ll x[200009], y[200009];
bool visited[200009];
vector<ll> g[200009];
vector<int> keiro;
bool f=true; //全部通れるか
bool flag=false;

int ans[200009];

void dfs(int pos){

  visited[pos]=true;
  keiro.push_back(pos);


  for(int i=1; i<g[pos].size(); i++){
    if(visited[g[pos][i]]==false){
      f=false;
      return;
    }
  }

  for(int i=0; i<g[pos].size(); i++){
    int nex=g[pos][i];
    
      dfs(nex);
    
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
    keiro={};
    
    for(int j=1; j<=n; j++)visited[j]=false;
    flag=true;
    if((int)g[i].size()==0)continue;
    dfs(i);
    

  for(int j=1; j<=n; j++){
    
    if(visited[j]==false){
      flag=false;
    }
  }


    if(f){
      flag=true;
      break;
    }

  }

  // bool flag=true;
  // for(int i=1; i<=n; i++){
    
  //   if(visited[i]==false){
  //     flag=false;
  //     break;
  //   }
  // }

  

  if(flag){
    int len=keiro.size();

    for(int i=0; i<len; i++){
      ans[keiro[i]]=i+1;
    }



    cout<<"Yes"<<endl;
    for(int i=1; i<=len; i++){
      if(i>1)cout<<" ";
      cout<<ans[i];
    }
    cout<<endl;
  }
  else{
    cout<<"No"<<endl;
  }

  

 
  


  
	return 0;
}
    
