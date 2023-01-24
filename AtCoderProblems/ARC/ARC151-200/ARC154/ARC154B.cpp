
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



long long n;
string s, t;
bool flag=true;


int main(){
  cin>>n>>s>>t;

  string a=s, b=t;

  sort(a.begin(), a.end());
  sort(b.begin(), b.end());

  if(a!=b){
    cout<<-1<<endl;
  }
  else{
    reverse(s.begin(), s.end());

    t+=t;
    reverse(t.begin(), t.end());

    int cp=0; 
    //cpはsの何文字目までが貪欲に探したとき部分列になってるか。
    for(int i=0; i<n; i++){
      //tは一周分しか検査しない。sの番目がスライドしていく。
      if(s[cp]==t[i])cp++;
    }

    //操作せねばならないのは末尾の部分列以外の部分なのでn-cp
    cout<<n-cp<<endl;
  }

  

 

  

  
   
  return 0;
}
    
