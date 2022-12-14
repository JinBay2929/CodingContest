
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


int n, a[100009], dp[100009];
//dp[i]←末尾がa[i]の部分列で最長の長さ

int len = 0, L[100009]; 
// len は L の長さ（例：L[4] まで書き込まれている場合 len=4）
//L[x]←長さがxになるような部分列の末尾の最小値

int main(){
  cin>>n;
  
  for(int i=1; i<=n; i++)cin>>a[i];

  for(int i=1; i<=n; i++){
    int pos = lower_bound(L+1, L+len+1, a[i])-L;

    //例　L=[1,4,7]の時にa[i]=5とすると、長さ2,末尾4の部分列に5を加えて
    //長さ3,末尾5の部分列を作れる。
    //次にLの7のところを5に更新。

    dp[i]=pos;

    L[dp[i]]=a[i];

    //Lに新たな長さの列の場合を追加したときlenを増加させる
    //つまりposが最後の要素の次の場所を指したとき。
    if(pos>len)len+=1;

  }

  cout << len << endl;

  return 0;
}
    
