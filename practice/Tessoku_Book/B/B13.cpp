
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


int n;
long long k;
long long a[100009], s[100009], r[100009];

//合計価格が K 円以内となるような買い方
//なので一品だけ買うのも良し、3つ以上買うも良し

long long sum(int l, int r){
  return s[r]-s[l-1];
}


int main(){
  cin>>n>>k;

  for(int i=1; i<=n; i++){
    cin>>a[i];
  }

  s[0]=0;
  for(int i=1; i<=n; i++)s[i]=s[i-1]+a[i];

  //累積和の末尾について尺取り法
  for(int i=1; i<=n; i++){
    if(i==1)r[i]=0; //一品目にk以上の値段が来るかもしれないので0。
    else r[i]=r[i-1];

    while(r[i]<n && sum(i, r[i]+1)<=k){
      r[i]++;
    }
  }

  long long ans=0;

  for(int i=1; i<=n; i++){
    ans+=(r[i]-i+1); //左端の品単品で買う場合を考慮して+1
  }

  cout<<ans<<endl;
  
   
  return 0;
}
    
