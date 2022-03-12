
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

#include<cmath>
#include<map>
#include <sstream>
#include<ctime>
#include<queue>
#include<set>
#include <cassert>
#include <numeric>
using namespace std;   


// 要素が複数の場合
struct Place {
  int x;
  int y;
  char lr;
};

struct PlaceLess { // 大小比較用の関数オブジェクトを定義することもできる
  bool operator()(const Place& a, const Place& b) const noexcept {
    // キーとして比較したい要素を列挙する
    return std::tie(a.y) < std::tie(b.y);
  }
};
int main(){
  int n, x, y;
  string s, ans="No";
  vector<vector<int> > places;
  cin>>n;

  for(int i=0; i<n; i++){
    vector<int> tmp;
    cin>>x>>y;
    tmp.push_back(x);
    tmp.push_back(y);
    places.push_back(tmp);
  }
  cin>>s;

  vector<Place> vp;
  for(int i=0; i<n; i++){
    vp.push_back(Place{places[i][0], places[i][1], s[i]});
  }

  sort(vp.begin(), vp.end(), PlaceLess{});

  // for(int i=0; i<vp.size(); i++){
  //   cout<<vp[i].x<<vp[i].y<<vp[i].lr<<endl;
  // }

  int tmpy=-1, starti=-21;
  for(int i=0; i<n; i++){
    
    if(tmpy==vp[i].y){
      int ts=i-starti;
      for(int j=0; j<ts; j++){
        if(vp[j+starti].x<vp[i].x && vp[j+starti].lr=='R' && vp[i].lr=='L'){
          ans="Yes";
          break;
        }
        if(vp[j+starti].x>vp[i].x && vp[j+starti].lr=='L' && vp[i].lr=='R'){
          ans="Yes";
          break;
        }
      }
    }else{
      starti=i;
      tmpy=vp[i].y;
    }
  }
  

  
  cout<<ans<<endl;
  
  return 0;
}
    

    
    
    
    
