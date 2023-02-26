
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



ll n;
string s;
vector<pair<ll, ll> > pos;

int main(){
  cin>>n>>s;

  int x=0, y=0;
  pos.push_back(make_pair(x, y));
  for(int i=0; i<(int)s.size(); i++){
    if(s[i]=='U'){
      y++;
      pos.push_back(make_pair(x, y));
    }
    else if(s[i]=='L'){
      x--;
      pos.push_back(make_pair(x, y));
    }
    else if(s[i]=='R'){
      x++;
      pos.push_back(make_pair(x, y));
    }
    else if(s[i]=='D'){
      y--;
      pos.push_back(make_pair(x, y));
    }
  }

  sort(pos.begin(), pos.end());
  int bef=pos.size();

  pos.erase(unique(pos.begin(), pos.end()), pos.end());

  int aft=pos.size();

  if(bef!=aft){
    cout<<"Yes"<<endl;
  }
  else{
    cout<<"No"<<endl;
  }
  


  
	return 0;
}
    
