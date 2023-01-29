
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


int h, w, a[2009][2009];
//横方向の和、縦方向の和
int yoko[2009],tate[2009];

//そのマスに出力するのはyoko[i]+tate[j]-a[i][j]

int main(){
  cin>>h>>w;

  for(int i=1; i<=h; i++){
    for(int j=1; j<=w; j++){
      cin>>a[i][j];
    }
  }

  for(int i=1; i<=h; i++){
    int sum=0;
    for(int j=1; j<=w; j++){
      sum+=a[i][j];
    }
    yoko[i]=sum;
  }

  for(int j=1; j<=w; j++){
    int sum=0;
    for(int i=1; i<=h; i++){
      sum+=a[i][j];
    }
    tate[j]=sum;
  }

  for(int i=1; i<=h; i++){
    for(int j=1; j<=w; j++){
      if(j>1)cout<<" ";

      int tmp=0;
      tmp+=yoko[i];
      tmp+=tate[j];
      tmp-=a[i][j];

      cout<<tmp;
    }
    cout<<endl;
  }
 


  
  return 0;
}
    
