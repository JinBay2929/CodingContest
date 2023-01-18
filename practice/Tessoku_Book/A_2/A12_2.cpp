
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


long long n, k;
long long a[100009];

//x秒後に出力が完了してるか⇒完了する秒数を二分探索
bool check(long long x){
  long long total=0;
  for(int i=1; i<=n; i++){
    total+=(x/a[i]);
  }

  if(total>=k)return true;
  return false;
}

int main(){
  cin>>n>>k;
  for(int i=1; i<=n; i++){
    cin>>a[i];
  }

  long long left=1, right=1'000'000'000;

  while(left<right){
    long long mid=(left+right)/2;

    if(check(mid)){
      right=mid;
    }else{
      left=mid+1;
    }
  }


  cout<<left<<endl;
  
   
  return 0;
}
    
