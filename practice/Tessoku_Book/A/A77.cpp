
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


int n, l, k;
int a[100009];


bool check(long long x){
  int count=0, last_kireme=0;
  for(int i=1; i<=n; i++){
    //最後の切れ目から現地点までがx以上であり、かつ残りがx以上ならカット可能。
    if(a[i]-last_kireme>=x && l-a[i]>=x){
      last_kireme=a[i];
      count++;
    }
  }

  if(count>=k)return true;
  return false;
  
}

int main(){
  cin>>n>>l;
  cin>>k;
  for(int i=1; i<=n; i++)cin>>a[i];

  //答えはこの範囲内でしか探索できないので、ギリギリまで広くとること。
  long long left=1, right=1'000'000'000;

  while(left<right){
    long long mid=(left+right+1)/2; //midは右に寄ってほしいので+1する。
    
    //mid地点で切れてるなら、もっと長くても切れるかも…
    if(check(mid))left=mid;
    else right=mid-1;

  }

  cout<<left<<endl;
  
  return 0;
}
    
