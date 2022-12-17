
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

//modの部分は出せてる
//それ以降で詰み

long long mo(long long a, long long b, long long m){
  long long aa=a, bb=b;

  for(long long i=1; i<bb; i++){
    a*=aa;
    a%=m;
  }

  cout<<a;

  for(long long i=1; i<aa; i++){
    b*=bb;
    b%=m;
  }

  cout<<b;

  return (a+b)%m;

}


int n, m;
long long a[509], mod[509][509];


int main(){
  cin>>n>>m;
  for(int i=1; i<=n; i++)cin>>a[i];

  for(int i=1; i<=n; i++){
    for(int j=i; j<=n; j++){
      mod[i][j]=0;
    }
  }

  for(int i=1; i<=n-1; i++){
    for(int j=i+1; j<=n; j++){
      long long modnum=mo(a[i],  a[j], m);
      mod[i][j]=modnum;
      mod[j][i]=modnum;
    }
  }

  long long maxnum=0, maxi=0, maxj=0, ans=0;
  for(int p=1; p<=n-1; p++){
    for(int i=1; i<=n-1; i++){
      for(int j=i+1; j<=n; j++){
        if(mod[i][j]>maxnum){
          maxnum=mod[i][j];
          maxi=i;
          maxj=j;
        }
      }
    }
  }
  

  return 0;
}
    
