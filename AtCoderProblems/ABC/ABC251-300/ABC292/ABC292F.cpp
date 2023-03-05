
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

int a, b;
ld ans;

//長方形の左下の点に三角形の点の一つを固定。

int main(){
  cout <<setprecision(11);
  cin>>a>>b;

  //長辺、短辺を管理しやすくする
  if(a>b) swap(a,b);

  ld tmp=2/sqrt(3);

  //超横長のケース。三角形の底辺が長方形の長辺に張り付く
  if(a*tmp<=b){
    cout<<a*tmp<<endl;
    return 0;
  }
  if(a == b){
    cout << a*(sqrt(6)-sqrt(2))<<endl;
    return 0;
  }

  //求める角度θは0とπ/6の間の値を取る。二分探索する
  ld mi = 0.0, ma = PI/6, mid,L,U;
  
  for(int i=0; i<=500; i++){
    mid = (mi + ma)/2;

    //Lは三角形の下側の辺。Uは左上の辺。
    //L,Uが一致するのが理想。
    L = b/cos(mid);
    U = a/cos(PI/6-mid);

    //Lが長すぎた場合はθを小さく、つまりcosθを大きくして
    //Lの右辺を小さく抑えたい。
    //なのでma=midとして角度の上限を抑える。
    if(L > U){
      ma = mid;
    }
    //Uが長すぎるならばLを長くして調整したい。
    //今回は逆にmi=midとして角度の下限を上げていく。
    else{
      mi = mid;
    }
  }
  
  cout << b/cos(mid)<< endl;
}


    
