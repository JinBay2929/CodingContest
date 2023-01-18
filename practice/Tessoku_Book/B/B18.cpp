
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


int n, s;
int a[69];
bool dp[69][10009];
vector<int> steps;

int main(){
  cin>>n>>s;

  for(int i=1; i<=n; i++)cin>>a[i];
  
  for(int i=0; i<=n; i++){
    dp[i][0]=true;
  }
  for(int i=1; i<=s; i++){
    dp[0][i]=false;
  }

  for(int i=1; i<=n; i++){
    for(int j=0; j<10005; j++){
      //j-a[i]>=0、つまり和がそのカードよりも小さいときは絶対に
      //条件を満たせない。ここで場合分けしないとバグる
      if(j-a[i]>=0){
        if(dp[i-1][j]==true || dp[i-1][j-a[i]]==true){
          dp[i][j]=true;
        }
        else dp[i][j]=false;
      }
      else{
        if(dp[i-1][j]==true){
          dp[i][j]=true;
        }
        else dp[i][j]=false;
      }
      
    }
  }


  if(dp[n][s]==true){
    int place=s; //現在の合計値

    for(int i=n; i>=1; i--){
      //i番目のカードを選んでいる場合を考慮すればいい。
      //a<bの時、dp[a][X]がtrueなら必ずdp[b][X]もtrueになる。
      //dpがtrueのとき何もしないので、placeが小さくなりすぎても問題ない。
      if(dp[i-1][place]==false){
        place-=a[i];
        steps.push_back(i);
      }
    }
    sort(steps.begin(), steps.end());

    int len=steps.size();
    cout<<len<<endl;


    for(int i=0; i<len; i++){
      cout<<steps[i];
      if(i<len-1)cout<<" ";
    }
    cout<<endl;
  }
  else{
    cout<<-1<<endl;
  }

  
  

   
  return 0;
}
    
