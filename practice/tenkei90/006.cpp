
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


int n, k;
string s;
vector<char> ans;



int main(){
  cin>>n>>k>>s;

  //kiten:ansに挿入する文字の候補の開始地点
  //tmp:一時的な最小の文字
  int kiten=0, tmp=0;

  //k文字の最小文字列を引っ張るのであれば、最小の文字を探せるのは先頭からn-i番目まで。
  //それ以上深く探すとk文字を持ってこれないため。
  for(int i=k; i>=1; i--){
    for(int j=kiten; j<=n-i; j++){
      if(s[j]<s[tmp]){
        tmp=j;
      }
    }
    //次のループの起点はこの周回の最小文字の次の番目の文字。
    kiten=tmp+1;
    ans.push_back(s[tmp]);
    tmp=kiten;
  }

  for(int i=0; i<k; i++){
    cout<<ans[i];
  }
  cout<<endl;
  
  return 0;
}
    
