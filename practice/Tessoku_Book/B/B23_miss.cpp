
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

//没コード供養。
//都市間の距離をメモ化し、next_permutationで訪問の順番を全通り試す。
//最後数ケース分だけTLE

int n, x[19], y[19];
vector<int> junban;
double d[19][19];

double dist(int a, int b, int c, int d){
  double ans=sqrt(pow(a-c, 2) + pow(b-d, 2));

  return ans;
}


int main(){
  cin>>n;
  for(int i=1; i<=n; i++)cin>>x[i]>>y[i];
  for(int i=1; i<=n; i++)junban.push_back(i);

  for(int i=1; i<=n; i++){
    for(int j=1; j<=n; j++){
      double tmp=dist(x[i], y[i], x[j], y[j]);
      d[i][j]=tmp;
      d[j][i]=tmp;
    }
  }

  double ans=1'000'000'000;
  do{
    double tmp=0;
    for(int i=0; i<=n-1; i++){
      if(i<n-1){
        tmp+=d[junban[i]][junban[i+1]];
      }
      else{
        tmp+=d[junban[i]][junban[0]];
      }
    }

    ans=min(ans, tmp);
  }while(next_permutation(junban.begin(), junban.end()));
  

  cout<<setprecision(6)<<ans<<endl;
   
  return 0;
}
    
