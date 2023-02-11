
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

int n, m, x;
int a[19], b[100009];
bool dp[100009], mochi[100009];
bool flag;



int main(){
  cin>>n;
  for(int i=1; i<=n; i++)cin>>a[i];
  cin>>m;
  for(int i=1; i<=m; i++)cin>>b[i];
  cin>>x;

  for(int i=1; i<=m; i++){
    //trueならモチあり
    mochi[b[i]]=true;
  }

  dp[0]=true;
  for(int i=1; i<=x; i++){
    if(mochi[i]==true && i<x){
      dp[i]=false;
    }
    else{
      for(int j=1; j<=n; j++){
        if(i>=a[j]){
          if(dp[i-a[j]]){
            dp[i]=true;
          }
        }
      }
    }

    
  }

  if(dp[x]){
    cout<<"Yes"<<endl;
  }
  else{
    cout<<"No"<<endl;
  }
    
  



  
 

 
  return 0;
}
    
