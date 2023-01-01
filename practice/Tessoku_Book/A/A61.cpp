
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


int n, m, a[200009], b[200009];
vector<int> g[100009];

int main(){
  cin>>n>>m;

  for(int i=1; i<=m; i++){
    cin>>a[i]>>b[i];

    g[a[i]].push_back(b[i]);
    g[b[i]].push_back(a[i]);
  }

  for(int i=1; i<=n; i++){
    cout<<i<<":{";
    for(int j=0; j<g[i].size(); j++){
      if(j>=1)cout<<", ";
      cout<<g[i][j];
    }
    cout<<'}'<<endl;

  }


  

  return 0;
}
    
