
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


int n, m, cnt=0;
string s[1009], t[1009], news[1009];


int main(){
  cin>>n>>m;
  for(int i=1; i<=n; i++){
    cin>>s[i];
  }
  for(int i=1; i<=m; i++){
    cin>>t[i];
  }
  
  for(int i=1; i<=n; i++){
    string tmp="";
    tmp+=s[i][3];
    tmp+=s[i][4];
    tmp+=s[i][5];
    news[i]=tmp;

    //cout<<tmp<<endl;
  }

  for(int i=1; i<=n; i++){
    for(int j=1; j<=m; j++){
      if(news[i]==t[j]){
        cnt++;
        break;
      }
    }
  }
  
  cout<<cnt<<endl;
   
  return 0;
}
    
