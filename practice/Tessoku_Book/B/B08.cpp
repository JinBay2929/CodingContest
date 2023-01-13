
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


int n, q;
int x[100009], y[100009];
int a[100009],b[100009],c[100009],d[100009];

int point[1509][1509], sum[1509][1509];

int main(){
  cin>>n;

  for(int i=1; i<=n; i++){
      cin>>x[i]>>y[i];
  }

  cin>>q;

  for(int i=1; i<=q; i++){
    cin>>a[i]>>b[i]>>c[i]>>d[i];
  }

  for(int i=0; i<=1505; i++){
    for(int j=0; j<=1505; j++){
      point[i][j]=0;
      sum[i][j]=0;
    }
  }

  for(int i=1; i<=n; i++){
    point[x[i]][y[i]]++;
  }


  for(int i=1; i<=1505; i++){
    for(int j=1; j<=1505; j++){
        sum[i][j]=sum[i][j-1]+point[i][j];
    }
  }

  for(int j=1; j<=1505; j++){
    for(int i=1; i<=1505; i++){
        sum[i][j]=sum[i-1][j]+sum[i][j];
    }
  }

  for(int i=1; i<=q; i++){
    int ans = sum[c[i]][d[i]]-sum[a[i]-1][d[i]]
    -sum[c[i]][b[i]-1]+sum[a[i]-1][b[i]-1];

    cout<<ans<<endl;
  }


  return 0;
}
    
