
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
using ld=long double;
#define PI (ld)3.14159265358979

struct MyStruct{
  ll ruiseki;
  bool one;
  ll num;

};
//structをソートできるようにするため宣言
bool compareMyStruct(const MyStruct& a, const MyStruct& b) {
  return a.ruiseki < b.ruiseki;
}

ll l,n1,n2;
ll v1[100009],l1[100009],v2[100009],l2[100009];
ll s1[100009], s2[100009]; //l[i]段階での累積の長さ
vector<MyStruct> ss;


int main(){
  cin>>l>>n1>>n2;
  for(int i=1; i<=n1; i++){
    cin>>v1[i]>>l1[i];
  }
  for(int i=1; i<=n2; i++){
    cin>>v2[i]>>l2[i];
  }

  s1[0]=0;
  s1[1]=l1[1];
  for(int i=2; i<=n1; i++){
    s1[i]=s1[i-1]+l1[i];
  }

  s2[1]=l2[1];
  for(int i=2; i<=n2; i++){
    s2[i]=s2[i-1]+l2[i];
  }

  for(int i=1; i<=n1; i++){
    MyStruct s={s1[i], true, v1[i]};
    ss.push_back(s);
  }
  for(int i=1; i<=n2; i++){
    MyStruct s={s2[i], false, v2[i]};
    ss.push_back(s);
  }

  sort(ss.begin(), ss.end(), compareMyStruct);

  ll cnt=0;
  ll st=0;
  for(ll i=0; i<n1+n2; i++){
    if(ss[i].one==true){
      ll place=lower_bound(s2+1, s2+n2+1, ss[i].ruiseki)-s2;

      if(v2[place]==ss[i].num){
        cnt+=(ss[i].ruiseki-st);
      }

      st=ss[i].ruiseki;
    }
    else{
      ll place=lower_bound(s1+1, s1+n1+1, ss[i].ruiseki)-s1;

      if(v1[place]==ss[i].num){
        cnt+=(ss[i].ruiseki-st);
      }

      st=ss[i].ruiseki;
    }
  }

  cout<<cnt<<endl;
  
  

  


  return 0;

}
    
