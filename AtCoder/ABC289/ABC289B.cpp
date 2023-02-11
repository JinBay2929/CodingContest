
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

int n, m, a[109];
int jun[109];
vector<int> g[100009];


int now=0;

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
int main(){
  cin>>n>>m;
  
  for(int i=1; i<=m; i++){
    cin>>a[i];
  }
  for(int i=1; i<=n; i++){
    jun[i]=-1;
  }
  
  UnionFind UF;
  UF.init(n);

  for(int i=1; i<=m; i++){
    UF.unite(a[i], a[i]+1);
  }

  
  for(int i=1; i<=n; i++){
    int tmp;
    if(jun[i]!=-1)continue;
    tmp=i;
    
    vector<int> tmpv;
    tmpv.push_back(i);

    for(int j=i+1; j<=n; j++){
      if(UF.root(j)==UF.root(tmp)){
        tmpv.push_back(j);
      }
    }
    sort(tmpv.begin(), tmpv.end(), greater<int>());

    for(int j=0; j<(int)tmpv.size(); j++){
      now++;
      jun[tmpv[j]]=now;
      //cout<<tmpv[j]<<" "<<now<<endl;
    }
    
    
  }

  for(int i=1; i<=n; i++){
    if(i>=2)cout<<" ";
    cout<<jun[i];
  }
  cout<<endl;


 
  return 0;
}
    
