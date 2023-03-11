
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


int h, w;
ll a[19][19];
vector<int> susumi;
int ans;

int main(){
  cin>>h>>w;

  for(int i=1; i<=h; i++){
    for(int j=1; j<=w; j++){
      cin>>a[i][j];
    }
  }

  //右
  for(int i=1; i<=w-1; i++){
    susumi.push_back(0);
  }
  //下
  for(int i=1; i<=h-1; i++){
    susumi.push_back(1);
  }

  int kai=h+w-2;

  do{
    set<int> s;
    s.insert(a[1][1]);
    int pv=1, ph=1, time=0;

    for(int i=0; i<kai; i++){
      if(susumi[i]==0){
        ph++;
        if(s.count(a[pv][ph])){
          break;
        }
      }
      else if(susumi[i]==1){
        pv++;
        if(s.count(a[pv][ph])){
          break;
        }
      }

      s.insert(a[pv][ph]);
      time++;
    }

    if(time==kai)ans++;

  }while(next_permutation(susumi.begin(), susumi.end()));
  


  
  cout<<ans<<endl;
  


  return 0;

}
    
