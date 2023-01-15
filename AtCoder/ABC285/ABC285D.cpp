
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


//TLE地獄。何個かテストケースは通ったが…

int n;
string s[100009], t[100009], ans="No";
queue<pair<string, string>> q;
set<string> x;


int main(){
  cin>>n;
  for(int i=1; i<=n; i++)cin>>s[i]>>t[i];

  for(int i=1; i<=n; i++){
    q.push(make_pair(s[i], t[i]));
    x.insert(s[i]);
  }

  int counter=0;
  while(true){
    string fs=q.front().first, ft=q.front().second;
    q.pop();

    if(x.count(ft)){
      q.push(make_pair(fs, ft));
      counter++;
    }else{
      x.erase(fs);
      x.insert(ft);
      counter=0;
    }

    if(counter>=n){
      ans="No";
      break;
    }
    if(q.size()==1){
      ans="Yes";
      break;
    }
  }

  cout<<ans<<endl;

   
  return 0;
}
    
