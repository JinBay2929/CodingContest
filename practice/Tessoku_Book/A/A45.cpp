
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


int n, score=0;
char c;
string a, ans="No";


int main(){
  cin>>n>>c;
  cin>>a;

  //操作をしてもscoreを3で割った余りの値は変わらないことに着目。
  for(int i=0; i<n; i++){
    if(a[i]=='R')score+=2;
    else if(a[i]=='B')score+=1;
  }


  if(c=='R' && score%3==2)ans="Yes";
  if(c=='B' && score%3==1)ans="Yes";
  if(c=='W' && score%3==0)ans="Yes";

  cout<<ans<<endl;
  

  return 0;
}
    
