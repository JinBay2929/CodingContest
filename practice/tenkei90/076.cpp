
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

ll n, a[200009], s[200009];

int main(){
  cin>>n;
  for(int i=1; i<=n; i++)cin>>a[i];
  for(int i=1; i<=n; i++)a[i+n]=a[i];

  s[1]=a[1];
  for(int i=2; i<=n*2; i++){
    s[i]=s[i-1]+a[i];
  }

  if(s[n]%10!=0){
    //10で割り切れないなら終了
    cout<<"No"<<endl;
  }
  else{
    //起点を全探索
    for (int i = 1; i <= n; i++) {
      ll goal = s[i] + s[n]/10;
      //累積和の中から欲しいgoalの値を探す。
      int pos1 = lower_bound(s+1, s + 2*n, goal) - s;
      if (s[pos1] == goal) {
        cout << "Yes" << endl;
        return 0;
      }
    }
    cout << "No" << endl;
  }

  return 0;
}
    
