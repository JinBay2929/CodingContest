
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


int n, a[200009], ans[200009];
stack<pair<int, int> > s;

int main(){
  cin>>n;
  
  for(int i=1; i<=n; i++)cin>>a[i];

  for(int i=1; i<=n; i++){
    if(i>=2){
      s.push(make_pair(i-1, a[i-1]));
    }

    while(!s.empty()){
      if(a[i]>=s.top().second){
        s.pop();
      }
      else{
        //無いと無限に上のif文を繰り返す
        break;
      }
    }

    if(s.empty())ans[i]=-1;
    else ans[i]=s.top().first;
  }


  for(int i=1; i<=n; i++){
    cout<<ans[i];
    if(i<n)cout<<' ';
  }

  cout<<endl;

  
  

  return 0;
}
    
