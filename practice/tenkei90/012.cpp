
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


int h, w, q, act;
bool masu[2009][2009];//赤の時true

class UnionFind{
  public:

 vector<int> par;

	void init(int sz) {
    //長さszのvectorを初期値-1で埋めとく
		par.resize(sz, -1);
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

    par[rootU]=rootV;
      
  }

  //u,vが同じグループか否か
  bool same(int u, int v){
    if(root(u)==root(v))return true;
    else return false;
  }
};

int main(){
  cin>>h>>w>>q;

  UnionFind UF;
  UF.init(h*w);

  for(int i=1; i<=q; i++){
    cin>>act;
    if(act==1){
      int r,c;
      cin>>r>>c;

      masu[r][c]=true;

      //隣接マスが赤いならuniteする
      if(masu[r-1][c])UF.unite((r-1)*w+c-1, (r-2)*w+c-1);
      if(masu[r+1][c])UF.unite((r-1)*w+c-1, r*w+c-1);
      if(masu[r][c-1])UF.unite((r-1)*w+c-1, (r-1)*w+(c-2));
      if(masu[r][c+1])UF.unite((r-1)*w+c-1, (r-1)*w+(c+0));
    }
    else if(act==2){
      string ans="No";
      int ra,ca,rb,cb;
      cin>>ra>>ca>>rb>>cb;

      if(masu[ra][ca]&&masu[rb][cb]){
        
        if(UF.same((ra-1)*w+ca-1, (rb-1)*w+cb-1)){
          ans="Yes";
        }
        
      }
      cout<<ans<<endl;

    }
  }

  return 0;
}
    
