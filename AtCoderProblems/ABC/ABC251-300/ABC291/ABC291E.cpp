
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

//トポロジカル順序が一意に定まればいい。
//つまりどのタイミングにおいても次に選ぶ頂点(入次数が0の頂点)が
//一意であること（⇒一つだけ）が必要十分らしい。

//解読してACまでする予定。

ll n, m;
vector<int> g[200009];

int main(){
  cin>>n>>m;

	vector<int> deg(n); //deg[i]:iは何本矢印が入っているか。受けているか
	for(int i=0;i<m;i++){
		int x,y;
		cin >> x >> y;
    //サイズ調整？
		x--,y--;
		g[x].push_back(y);
		deg[y]++;
	}
	
	vector<int>ans(n); 
	queue<int>q;
	int cnt=0;

  //矢印を受けている本数が0の点をqに入れていく
	for(int i=0;i<n;i++)if(deg[i]==0)q.push(i);

	while(!q.empty()){
    //qの要素数が1より上==トポロジカルが一意に定まらない
		if(q.size()!=1){
			cout << "No" << endl;
			return 0;
		}
		int v=q.front();q.pop();
		ans[v]=++cnt;

    //次の移動候補の点が1本の矢印のみを受けているのであればqに追加。
    //複数本受けている時点で一意には定まらない
		for(auto vv:g[v]){
      //deg[vv]が1の時のみ起動する
      if(!--deg[vv])q.push(vv);
    }
	}
 
	cout << "Yes" << endl;
	for(int i=0;i<n;i++)cout << ans[i] << " \n"[i==n-1]; 
  //インデックスが[0,1]なので。(i == n-1) ? "\n" : " ";
  //最後以外はスペース、最後は改行

  

  
	return 0;
}
    
