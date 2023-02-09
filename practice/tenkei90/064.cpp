
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
ll a[100009], l[100009],r[100009],v[100009];
ll d[100009];

int main(){
  cin>>n>>q;
  for(int i=1; i<=n; i++)cin>>a[i];
  
  for(int i=1; i<=q; i++)cin>>l[i]>>r[i]>>v[i];

  //今時点での不便さ
  ll ans=0;
  for(int i=1; i<=n-1; i++){
    ans+=abs(a[i+1]-a[i]);
  }

  //差d[i]:a[i+1]-a[i]
  for(int i=1; i<=n-1; i++){
    d[i]=a[i+1]-a[i];
  }

  //地殻変動にかかわるマスの端と隣接しているマスにしか影響がない
  //なので差分のみを毎回考えるようにする。
  for(int i=1; i<=q; i++){
    if(l[i]==1 && r[i]==n){
      //何もしない
      //ここcontinueにすると出力できないし、消すと場合分けがめんどい
    }
    else if(l[i]==1){
      ll tmp=d[r[i]];
      d[r[i]]-=v[i];
      ans+=(abs(d[r[i]])-abs(tmp));
    }
    else if(r[i]==n){
      ll tmp=d[l[i]-1];
      d[l[i]-1]+=v[i];
      ans+=(abs(d[l[i]-1])-abs(tmp));
    }
    else{
      ll tmpl=d[l[i]-1], tmpr=d[r[i]];

      //差dを更新、ansの帳尻を合わせる
      d[r[i]]-=v[i];
      ans+=(abs(d[r[i]])-abs(tmpr));
    

      d[l[i]-1]+=v[i];
      ans+=(abs(d[l[i]-1])-abs(tmpl));
      
    }

    cout<<ans<<endl;
  }

  

  

 
  return 0;
}
    
