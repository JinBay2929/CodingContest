
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



int n, m, a[200009], b[200009];
vector<int> g[200009];
int line[200009]; //rootがiであるグループに属する編の数
int hasline[200009];  //その点が編を何個持っているか

class UnionFind{
  public:

  int par[200009], siz[200009];

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




int main(){
  cin>>n>>m;

  for(int i=1; i<=m; i++){
    cin>>a[i]>>b[i];
    g[a[i]].push_back(b[i]);
    g[b[i]].push_back(a[i]);
    
    if(a[i]!=b[i]){
      hasline[a[i]]++;
      hasline[b[i]]++;

    }
    else{
      hasline[a[i]]++;
    }
  }

  UnionFind UF;
  UF.init(n);


  for(int i=1; i<=m; i++){
    UF.unite(a[i], b[i]);

    line[UF.root(a[i])]++;
  }

  bool flag=true;

  //辺が0なら当然false。
  //以下のチェックで弾けはするが
  if(m==0)flag=false;


  //自分が根っこかつ大きさ1のぼっち⇒1本辺を持っている場合以外はfalse
  for(int i=1; i<=n; i++){
    if(UF.root(i)==i && UF.siz[i]==1){
      if(hasline[i]!=1)flag=false;
    }

    
  }

  for(int i=1; i<=n; i++){
    if(line[i]>0){
      if(UF.siz[i]!=line[i]){
      flag=false;
      break;
    }
    
    }
    //cout<<UF.root(i)<<line[i]<<endl;
  }

  if(flag){
    cout<<"Yes"<<endl;
  }
  else{
    cout<<"No"<<endl;
  }


  
}
    
