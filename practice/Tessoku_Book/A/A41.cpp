
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


int n, counter=0;
string ans="No";
char s[200009];


int main(){
  cin>>n;

  for(int i=1; i<=n; i++)cin>>s[i];

  for(int i=2; i<=n; i++){
    if(s[i-1]==s[i])counter++;
    else counter=0;

    //「前と同じ文字」になる場合が二回以上発生すればOK
    if(counter>=2)ans="Yes";
  }
  

  


  cout<<ans<<endl;

  
  

  return 0;
}
    
