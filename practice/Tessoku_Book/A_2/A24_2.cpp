
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


int n, a[100009];
int dp[100009]; //dp[i]⇒末尾がa[i]で最長の部分増加列
int L[100009], len=0;  //L[x]⇒長さxの部分増加列の末尾の最小値


int main(){
  cin>>n;
  for(int i=1; i<=n; i++)cin>>a[i];

  
  for(int i=1; i<=n; i++){
    int pos=lower_bound(L+1, L+len+1, a[i])-L;

    L[pos]=a[i];
    dp[i]=pos; 
    //dp[i]は操作に一切関与してないので、最終的な長ささえ出れば
    //いいなら不要ではある

    if(pos>len)len++;
  }

  cout<<len<<endl;
  
   
  return 0;
}
    
