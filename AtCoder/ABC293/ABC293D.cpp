
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


ll n, m;
ll a[200009], c[200009];
char b[200009], d[200009];
int bb[200009], dd[200009];

ll kei=0;
ll cir=0;

bool sumi[20009][2];


int main(){
  cin>>n>>m;

  for(int i=1; i<=m; i++){
      cin>>a[i]>>b[i]>>c[i]>>d[i]; 
  }

  for(int i=1; i<=m; i++){
    if(b[i]=='R')bb[i]=0;
    else bb[i]=1;

    if(d[i]=='R')dd[i]=0;
    else bb[i]=1;
  }

  UnionFind UF;
  UF.init(n);

  for(int i=1; i<=m; i++){
    if(sumi[a[i]][bb[i]]==true || sumi[c[i]][dd[i]]==true)continue;

    if(a[i]!=c[i]){
        if(UF.root(a[i])==UF.root(c[i])){
            cir++;
        }
        else{
            UF.unite(a[i], c[i]);
            //kei--;
        }
    }
    else{
        cir++;
    }
    
    sumi[a[i]][bb[i]]==true;
    sumi[c[i]][dd[i]]==true;
  }

  kei=0;
  set<int> s;
  for(int i=1; i<=n; i++){
    if(!s.count(UF.root(i))){
      s.insert(UF.root(i));
      kei++;

    }
  }



  cout<<cir<<" "<<kei-cir<<endl;

  
  


  return 0;

}
    
