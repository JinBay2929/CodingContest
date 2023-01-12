
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


int n, a[100009];
int q;
int l[100009], r[100009];
int sum[100009];

int main(){
  cin>>n;

  for(int i=1; i<=n; i++)cin>>a[i];

  cin>>q;

  for(int i=1; i<=q; i++){
    cin>>l[i]>>r[i];
  }

  //当たり数の累積和を取った。sum[r]-sum[l-1]で該当範囲の当たり数が出せる
  sum[0]=0;
  for(int i=1; i<=n; i++){
    sum[i]=sum[i-1]+a[i];
  }


  for(int i=1; i<=q; i++){
    int time = r[i]-l[i]+1;
    int wintime = sum[r[i]]-sum[l[i]-1];

    if(wintime>time-wintime)cout<<"win"<<endl;
    else if(wintime==time-wintime)cout<<"draw"<<endl;
    else cout<<"lose"<<endl;
  }

  return 0;
}
    
