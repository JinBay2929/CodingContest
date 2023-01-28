
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


string s, t;
bool l[300009], r[300009];
bool ans;

bool match(char a,char b){
	return a=='?' || b=='?' || a==b;
}

int main(){
  cin>>s>>t;

  int lens=s.size(), lent=t.size();

  l[0]=true;
  //左から何文字目までが一致し続けているか。
  //一致する範囲はtrue
  for(int i=0; i<lent; i++){
    if(!match(s[i], t[i]))break;
    else l[i+1]=true;
  }

  reverse(s.begin(), s.end());
  reverse(t.begin(), t.end());
  
  r[0]=true;
  //右から何文字目までが一致し続けているか。
  //一致する範囲はtrue
  for(int i=0; i<lent; i++){
    if(!match(s[i], t[i]))break;
    else r[i+1]=true;  //r[1]~
  }

  
  for(int i=0;i<=lent;i++){
		if(l[i] && r[lent-i])cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
	}

  
  return 0;
}
    
