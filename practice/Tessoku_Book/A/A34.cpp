
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


int n, x, y, a[100009];
int grundy[100009];

int main(){
  cin>>n>>x>>y;
  for(int i=1; i<=n; i++)cin>>a[i];

  //一つの山についてgrundy数を求める
  for(int i=0; i<=100004; i++){
    bool transit[3]={false, false, false};
    //grundy[k]は0,1,2のいずれかしか取りえない
    if(i>=x)transit[grundy[i-x]]=true;
    if(i>=y)transit[grundy[i-y]]=true;

    //取りうるgrundy数を0から小さい順に検証
    if(transit[0]==false)grundy[i]=0;
    else if(transit[1]==false)grundy[i]=1;
    else grundy[i]=2;
  }

  int gr=0;
  for(int i=1; i<=n; i++){
    //各山のgrundy数のxorを取っていく
    gr=(gr^grundy[a[i]]);
  }

  //grundy数のxor和が0なら後手必勝。
  if(gr!=0)cout<<"First"<<endl;
  else cout<<"Second"<<endl;
  

  return 0;
}
    
