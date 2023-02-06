
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


int n, q;
ll a[200009];
int t[200009], x[200009], y[200009];

int zure=0;//zureは0からn-1の間の大きさをとるようにする

int main(){
  cin>>n>>q;

  for(int i=1; i<=n; i++)cin>>a[i];

  for(int i=1; i<=q; i++){
    cin>>t[i]>>x[i]>>y[i];
  }
 

  for(int i=1; i<=q; i++){
    if(t[i]==1){
      int mx=(x[i]-zure+n)%n, my=(y[i]-zure+n)%n;
      //x[i]が末尾でzureが0とかだと上式の結果mx=0とかになる。
      //a[1]からスタートしてるので正しく末尾を指すように下式でnを足す
      if(mx==0)mx+=n;
      if(my==0)my+=n;

      int tmp=a[mx];
      a[mx]=a[my];
      a[my]=tmp;
    }
    else if(t[i]==2){
      zure++;
      zure%=n;
    }
    else if(t[i]==3){
      int mx=(x[i]-zure+n)%n;
      if(mx==0)mx+=n;

      cout<<a[mx]<<endl;
    }
  }


 
  return 0;
}
    
