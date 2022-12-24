
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


string s;

int main(){
  cin>>s;

  long long  sl=s.size(), count=0, zerocnt=0;

  //forの最終回の0状件考えるのが難しいので適当な数字を引っ付けた
  s[sl]='9';

  for(int i=0; i<=sl; i++){
    if(s[i]=='0'){
      zerocnt++;
    }
    if(zerocnt>0 && s[i]!='0'){
      count-=(zerocnt/2);
      zerocnt=0;
    }

    count++;
  }

  //引っ付けた数字のcountは引いておく。
  count--;

  
  cout<<count<<endl;


  return 0;
}
    
