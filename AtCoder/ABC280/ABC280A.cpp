
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


string s[11];
int h, w, ans=0;

int main(){
  cin>>h>>w;
  for(int i=0; i<h; i++){
    cin>>s[i];
  }

  for(int i=0; i<h; i++){
    for(int j=0; j<w; j++){
      if(s[i][j]=='#')ans+=1;
    }
  }

  cout<<ans<<endl;

  return 0;
}
    
