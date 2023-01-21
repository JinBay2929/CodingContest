
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

int n, x, mai=0, maisum[59];
int a[59], b[59];
bool dp[2509][10009];
string ans;

int main(){
  cin>>n>>x;
  
  b[0]=0;
  for(int i=1; i<=n; i++){
    cin>>a[i]>>b[i];
    mai+=b[i]; //トータルのコイン枚数
    maisum[i]=b[i]+maisum[i-1]; //その種類を含めた種類までのトータル枚数
  }

  dp[0][0]=true;
  int syurui; //コイン種類。1種類目～とか
  for(int i=1; i<=mai; i++){
    for(int j=0; j<=x; j++){
      syurui=lower_bound(maisum, maisum+n, i)-maisum;


      if(j<a[syurui]){
        dp[i][j]=dp[i-1][j];
      }
      else{
        if(dp[i-1][j]==true || dp[i-1][j-a[syurui]]==true){
          dp[i][j]=true;
        }
      }
      //if(dp[i][j]==true)cout<<i<<j<<dp[i][j]<<endl;
    }
  }

  if(dp[mai][x]==true){
    cout<<"Yes"<<endl;
  }else{
    cout<<"No"<<endl;
  }

  

  
   
  return 0;
}
    
