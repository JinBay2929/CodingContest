
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


int n, q;
ll tmp;
vector<ll> a;
ll b[300009];



int main(){
  cin>>n;
  for(int i=1; i<=n; i++){
    cin>>tmp;
    a.push_back(tmp);
  }

  cin>>q;
  for(int i=1; i<=q; i++)cin>>b[i];

  //b[i]について、aの中での前後の数字がわかればabsの最小値が出せる。
  //二分探索をq回やるのでNlogNでできる
  sort(a.begin(), a.end());

  for(int i=1; i<=q; i++){
    int place=lower_bound(a.begin(), a.end(), b[i])-a.begin();

    //b[i]がaの最小値より小さいとき
    if(place==0){
      cout<<abs(a[0]-b[i])<<endl;
    }
    //b[i]がaの最大値より大きいとき
    else if(place==n){
      cout<<abs(a[n-1]-b[i])<<endl;
    } 
    //それ以外
    else{
      cout<<min(abs(a[place]-b[i]), abs(a[place-1]-b[i]))<<endl;
    }
  }

  
  return 0;
}
    
