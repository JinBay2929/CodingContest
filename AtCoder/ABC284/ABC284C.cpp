
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


//8/20ACから抜け出せず終了。何故なのか。。。
class UnionFind{
  public:

  int par[100009], siz[100009];

  void init(int n){
    for(int i=1; i<=n; i++){
      par[i]=-1;// 最初は親が無い
      siz[i]=1;// 最初はグループの頂点数が 1
    }
  }

  int root(int x){
    while(true){
      //親を辿って行って根を探す。-1ならそこが根。
      if(par[x]==-1)break;
      x=par[x];
    }

    return x;
  }

  void unite(int u, int v){
    int rootU=root(u);
    int rootV=root(v);

    //同じグループに属す=根が同じならスキップ。
    if(rootU==rootV)return;

    if(siz[rootU] < siz[rootV]){
      //uの要素数が少ない場合。
      par[rootU]=rootV;
      siz[rootV]=siz[rootU]+siz[rootV];
    }else{
      //vの要素数が少ない場合。
      par[rootV]=rootU;
      siz[rootU]=siz[rootU]+siz[rootV];
    }
  }

  //u,vが同じグループか否か
  bool same(int u, int v){
    if(root(u)==root(v))return true;
    else return false;
  }
};


int n, m;
int u[100009], v[100009];
vector<int> gr;

int main(){
  cin>>n>>m;
  for(int i=1; i<=m; i++)cin>>u[i]>>v[i];

  UnionFind UF;
  UF.init(n);

  for(int i=1; i<=m; i++){
    
      UF.unite(u[i], v[i]);
    
  }

  for(int i=1; i<=n; i++){
    gr.push_back(UF.root(i));
  }

  // for(int i=0; i<n; i++){
  //   cout<<gr[i]<<endl;
  // }



  gr.erase(unique(gr.begin(), gr.end()), gr.end());

  


  int s=gr.size();
  cout<<s<<endl;
  

  
  

  return 0;
}
    
