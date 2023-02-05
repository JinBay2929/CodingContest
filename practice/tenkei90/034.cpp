
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


int n, k;
int a[100009], ans=0;
map<int, int> Map;

//最初はsetで要素の管理した。がその要素が部分列中に複数個ある場合に
//削除とかができなかった。mapなら解決可。

int main(){
  cin>>n>>k;
  for(int i=1; i<=n; i++)cin>>a[i];
  
  int cr=1, cnt=0; //cr:尺取り法の末尾の場所 cnt:要素の種類数
  //iはスタート地点
  for(int i=1; i<=n; i++){
    while(cr<=n){
      if(Map[a[cr]]==0 && cnt==k)break;
      if(Map[a[cr]]==0)cnt++;

      Map[a[cr]]++;//いかなる場合でもMapのキーa[cr]の数は増やす
      cr++;
    }

    ans=max(ans, cr-i);//crは最終到達点の次の位置にいる
    if(Map[a[i]]==1)cnt--;
    Map[a[i]]--;
  }

  cout<<ans<<endl;


  return 0;
}
    
