
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


int n, q;
int query[100009], u[100009], v[100009];

int main(){
  cin>>n>>q;
  for(int i=1; i<=q; i++)cin>>query[i]>>u[i]>>v[i];

  UnionFind UF;
  UF.init(n);


  for(int i=1; i<=q; i++){
    if(query[i]==1){
      UF.unite(u[i], v[i]);
    }
    else if(query[i]==2){
      bool ans=UF.same(u[i], v[i]);
      if(ans){
        cout<<"Yes"<<endl;
      }else{
        cout<<"No"<<endl;
      }
    }
  }
  
  

  return 0;
}
    
