
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


int n;
int a[100009], b[100009];

int main(){
  cin>>n;
  
  for(int i=1; i<=n; i++)cin>>a[i];

  //vectorの方が弄りやすい？のでvectorで複製をつくる
  vector<int> t;
  for(int i=1; i<=n; i++) t.push_back(a[i]);
  
  sort(t.begin(), t.end());

  //重複削除。
  t.erase(unique(t.begin(), t.end()), t.end());

  //やってることはfindと変わらない。bに何番目に小さいかをいれていく。
  for(int i=1; i<=n; i++){
    b[i]=lower_bound(t.begin(), t.end(), a[i])-t.begin()+1;
  }


  for(int i=1; i<=n; i++){
    if(i>=2)cout<<" ";
    cout<<b[i];
  }


  return 0;
}

    
    
    
    
