
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



int n;
int a[100009], b[100009], c[100009], d[100009];
int tmp[1509][1509], sum[1509][1509];
int counter=0;


int main(){
  cin>>n;
  for(int i=1; i<=n; i++){
    cin>>a[i]>>b[i]>>c[i]>>d[i];
  }


  for(int i=0; i<=1505; i++){
    for(int j=0; j<=1505; j++){
      tmp[i][j]=0;
      sum[i][j]=0;
    }
  }

  for(int i=1; i<=n; i++){
    //ここで1だけずらさないと下のfor文で場合分けが必要になって面倒。
    tmp[a[i]+1][b[i]+1]++;
    tmp[c[i]+1][d[i]+1]++;

    tmp[a[i]+1][d[i]+1]--;
    tmp[c[i]+1][b[i]+1]--;
  }

  for(int i=1; i<=1505; i++){
    for(int j=1; j<=1505; j++){
      //原点を(1,1)に変換するイメージ。面積さえ出ればいいので影響なし。
      sum[i][j]=sum[i][j-1]+tmp[i][j];
    }
  }

  for(int i=1; i<=1505; i++){
    for(int j=1; j<=1505; j++){
      sum[i][j]=sum[i-1][j]+sum[i][j];
    }
  }

  for(int i=1; i<=1505; i++){
    for(int j=1; j<=1505; j++){
      if(sum[i][j]>0)counter++;
    }
  }

  cout<<counter<<endl;
   
  return 0;
}
    
