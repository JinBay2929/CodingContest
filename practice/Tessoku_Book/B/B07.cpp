
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


int t, n;
int l[500009], r[500009];
int tmp[500009], sum[500009];

int main(){
  cin>>t;
  cin>>n;

  for(int i=1; i<=n; i++){
    cin>>l[i]>>r[i];
  }

  //ないとtmp[0]を参照したときにエラーが出る。
  for (int i = 0; i <= t; i++) tmp[i] = 0;


  //参加し始める日は人数が+1になり、帰った日には-1になる。
  for(int i=1; i<=n; i++){
    tmp[l[i]]++;
    //前の問題はtmp[r[i]+1]。1~3の時、足したいのは1.5,2.5のときなので
    tmp[r[i]]--;
  }

  //0.5秒後にはtmp[0]人がいる
  sum[0]=tmp[0];
  for(int i=1; i<=t; i++){
    sum[i]=sum[i-1]+tmp[i];
  }

  for(int i=0; i<=t-1; i++){
    cout<<sum[i]<<endl;
  }


  return 0;
}
    
