
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


int q;
stack<string> s;

//出力が若干見づらいが（入力の途中に出力がはさまる）、
//atcoder的には大丈夫っぽい
int main(){
  cin>>q;
  
  for(int i=1; i<=q; i++){
    int type;
    string title;

    cin>>type;

    if(type==1){
      cin>>title;
      s.push(title);
    }
    else if(type==2){
      cout<<s.top()<<endl;
    }
    else{
      s.pop();
    }
  
  }
  return 0;
}
    
