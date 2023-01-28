
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


int n, k;
ll l, a[100009];

//スコアpを達成できるか？
bool cuttable(int p){
  int cnt=0; //切れた回数
  ll tmp=0, sumi=0; //仮の長さ、カット済みの長さ
  for(int i=1; i<=n; i++){
    tmp=a[i]-sumi;
    if(tmp>=p && l-a[i]>=p){
      cnt++;
      sumi+=tmp;
      tmp=0;
    }
  }
  if(cnt>=k)return true;
  else return false;
}

int main(){
 cin>>n>>l;
 cin>>k;
 for(int i=1; i<=n; i++)cin>>a[i];

  ll left=0, right=1'000'000'008;

  while(left<right){
    //右に吸い付かないと無限ループの温床になる
    ll mid=(left+right+1)/2;  

    if(cuttable(mid)){
      left=mid;
    }
    else{
      right=mid-1;
    }

    //cout<<left<<endl;
  }

  cout<<left<<endl;

  return 0;
}
    
