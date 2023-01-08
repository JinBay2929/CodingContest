
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



int h, w, k;
char c[19][109];
int ans;

//1~hは行ごと、h+1~h+wは列ごとの白の合計。
int whitesum[119];

int main(){

  cin>>h>>w>>k;
  for(int i=1; i<=h; i++){
    for(int j=1; j<=w; j++){
      cin>>c[i][j];
    }
  }

  //白の累積和を取りたい
  //行ごと
  for(int i=1; i<=h; i++){
    int cnt=0;
    for(int j=1; j<=w; j++){
      if(c[i][j]=='.')cnt++;
    }
    whitesum[i]=cnt;
  }
  
  //列ごと
  for(int i=1; i<=w; i++){
    int cnt=0;
    for(int j=1; i<=h; i++){
      if(c[i][j]=='.')cnt++;
    }
    whitesum[h+i]=cnt;
  }

  

  for(int l=1; l<=k; l++){
    //max_element(a,b)で[a, b)の最大値のイテレータを返す。
    auto maxplace=max_element(whitesum+1, whitesum+h+w+1);
    //cout<<*maxplace<<endl;

    //行部分に最大値があるなら、その行の白を0にして
    //全列の白を1ずつ減らす。
    //マイナスになることはないのでmaxを活用して最小0でもにしてる。
    if(whitesum+1<=maxplace && maxplace<=whitesum+h){
      whitesum[maxplace-whitesum]=0;
      for(int y=1; y<=w; y++){
        whitesum[h+y]=max(whitesum[h+y]-1, 0);
      }
      
    }
    else{
      //列部分の場合も同様。
      whitesum[maxplace-whitesum]=0;
      for(int z=1; z<=h; z++){
        whitesum[z]=max(whitesum[z]-1, 0);
      }
    }
  }

  //accumulate(a,b,c←初期値)で[a, b)の累積値を取れる。
  ans=h*w-accumulate(whitesum+1, whitesum+h+1, 0);
  


  cout<<ans<<endl;
  
  return 0;
}
    
