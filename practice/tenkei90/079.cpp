
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

int h, w;
int a[109][109], b[109][109];

bool flag=true;
ll ans=0; //オーバーフロー対策

//足す処理、引く処理をそれぞれ括った方が良いと考えたけど、
//下のfor文内で+=(b[i][j]-a[i][j])すればよかった説はある
void add(int h, int w){
  a[h][w]++;
  a[h+1][w]++;
  a[h][w+1]++;
  a[h+1][w+1]++;
  ans++;
}
void sub(int h, int w){
  a[h][w]--;
  a[h+1][w]--;
  a[h][w+1]--;
  a[h+1][w+1]--;
  ans++;
}

int main(){
  cin>>h>>w;

  for(int i=1; i<=h; i++){
    for(int j=1; j<=w; j++){
      cin>>a[i][j];
    }
  }
  for(int i=1; i<=h; i++){
    for(int j=1; j<=w; j++){
      cin>>b[i][j];
    }
  }

  for(int i=1; i<=h-1; i++){
    for(int j=1; j<=w-1; j++){
      int tmp=b[i][j]-a[i][j];
      if(tmp>0){
        for(int k=1; k<=tmp; k++)add(i, j);
      }
      else{
        for(int k=1; k<=abs(tmp); k++)sub(i, j);
      }
    }
  }

  for(int i=1; i<=h; i++){
    if(a[i][w]!=b[i][w])flag=false;
  }
  for(int j=1; j<=w; j++){
    if(a[h][j]!=b[h][j])flag=false;
  }

  if(flag){
    cout<<"Yes"<<endl;
    cout<<ans<<endl;
  }
  else{
    cout<<"No"<<endl;
  }
  

 
  return 0;
}
    
