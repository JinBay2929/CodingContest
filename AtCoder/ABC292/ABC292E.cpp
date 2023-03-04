
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
int dist[2009][2009];

int main(){
  cin>>n>>m;

  for(int i=1; i<=m; i++){
    cin>>a[i]>>b[i];
    g[a[i]].push_back(b[i]);
  }

  for(int j=1; j<=n; j++){
    queue<int> q;

    for(int i=1; i<=n; i++){
        dist[j][i]=-1;
    }
    q.push(j);
    dist[j][j]=0;

    while(!q.empty()){
      int pos=q.front();
      q.pop();

      for(int i=0; i<g[pos].size(); i++){
        int to=g[pos][i];
        //最短経路からqueueに追加されるのでまだ行ってない地点を考えればいい
        if(dist[j][to]==-1){
          dist[j][to]=dist[j][pos]+1;
          q.push(to);
        }
      }
  }

  }

  ll ans=0;
  for(int i=1; i<=n; i++){
    for(int j=1; j<=n; j++){
      if(dist[i][j]>=2)ans++;
    }
  }

  cout<<ans<<endl;


  
}
    
