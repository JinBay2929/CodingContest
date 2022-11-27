
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


//解説から写経。

int main(){
  int h,w;
  cin >> h >> w;

  //h行のvector
  vector<string> s(h),t(h);

  //vectorのs内のnxという要素（各要素）のアドレスについて入力する
  //auto& eを書くと、コンテナ内の要素を変更できる。
  //実体auto eを書くと各要素がコピーコンストラクタによって
  //コピーされてからfor文に渡される。
  for(auto& nx : s){cin >> nx;}
  for(auto& nx : t){cin >> nx;}


  // 転置して列の並び替えで対応できるようにする
  vector<string> Ts(w),Tt(w);
  for(int i=0;i<h;i++){
    for(int j=0;j<w;j++){
      Ts[j].push_back(s[i][j]);
      Tt[j].push_back(t[i][j]);
    }
  }
  // Ts, Ttの中身はstringなのでソートが可能。
  //一致すればソートで合わせられることになる
  sort(Ts.begin(),Ts.end());
  sort(Tt.begin(),Tt.end());
  if(Ts==Tt){cout << "Yes"<<endl;}
  else{cout << "No"<<endl;}
  return 0;
}

    
    
    
    
