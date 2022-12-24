
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

bool goodStr(string s){
  int cntf=0, cntb=0, l=0, sl=s.size();
  bool ans=true;

  for(int i=0; i<sl; i++){
    if(s[i]=='(')cntf++;
    else if(s[i]==')')cntb++;
    else if(s[i]<'a' || s[i]>'z')ans=false;
  }

  if(cntf!=cntb)ans=false;

  return ans;
}



string s, ans="No";
int box[29];

int main(){
  cin>>s;

  int sl=s.size();

  for(int i=0; i<6; i++){
    box[i]=0;
  }

  for(int i=0; i<sl; i++){
    if('a'<=s[i] && s[i]<='z'){
      box[s[i]-'a']++;

      if(box[s[i]-'a']>1){
        ans="No";
        break;
      }
    }

    //末尾の)が出る⇒それまでに良い文字列として削除された内容を
    //もう一度削除することになる＝＝全部カウントを0にして問題ない？
    if(s[i]==')'){
      for(int i=0; i<26; i++){
        box[i]=0;
      }
    }

    if(i==(sl-1))ans="Yes";
  }

  

  
  cout<<ans<<endl;


  return 0;
}
    
