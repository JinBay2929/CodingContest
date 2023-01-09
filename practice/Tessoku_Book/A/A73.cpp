
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

struct prof{
  int to, di, tree;
};

int n, m;
int a[100009], b[100009], c[100009], d[100009];
vector<pair<int, int>> g[10009];

// ダイクストラ法で使う変数
long long cur[8009]; bool kakutei[8009];
priority_queue<pair<long long, int>, vector<pair<long long, int>>, greater<pair<long long, int>>> q;

int main(){
  cin>>n>>m;

  for(int i=1; i<=m; i++){
    cin>>a[i]>>b[i]>>c[i]>>d[i];

    //d[i]は0or1。木の存在はほんのちょっとしたボーナスなので、
    //距離を10000倍して木の本数を引く。
    if(d[i]==1){
      g[a[i]].push_back(make_pair(b[i], 10000*c[i]-1));
      g[b[i]].push_back(make_pair(a[i], 10000*c[i]-1));
    }
    else{
      g[a[i]].push_back(make_pair(b[i], 10000*c[i]));
      g[b[i]].push_back(make_pair(a[i], 10000*c[i]));
    }
  }

  //配列初期化。全部確定していないし距離は超長。
  for(int i=1; i<=n; i++)kakutei[i]=false;
  for(int i=1; i<=n; i++)cur[i]=(1LL<<60);

  cur[1]=0;
  q.push(make_pair(cur[1], 1)); //(距離、頂点番号)。gとは逆転してる。

  while(!q.empty()){
    int pos=q.top().second;
    q.pop();

    //確定してるならスキップ。
    if(kakutei[pos]==true)continue;

    kakutei[pos]=true;

    for(int i=0; i<g[pos].size(); i++){
      //優先度付きキューに次の行先候補を入れていく
      int nex=g[pos][i].first;
      int cost = g[pos][i].second;

      if(cur[nex]>cost+cur[pos]){
        cur[nex]=cost + cur[pos];
        q.push(make_pair(cur[nex], nex));
      }
    }
  }

  // マラソンコースの距離：cur[N]/10000 を小数点以下切り上げた値
  //+9999/10000とすることで木が0本でも切り上げられない。
	// コース上の木の数：cur[N] と Distance*10000 の差分。
  //最初に木1本につき1だけ距離を短縮したため。
	long long Distance = (cur[n] + 9999) / 10000;
	long long NumTrees = Distance * 10000 - cur[n];
	cout << Distance << " " << NumTrees << endl;


  
  return 0;
}
    
