
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


//O(NlogN)なのでもっと効率よくできる

int n;
string s;
vector<int> maru, batu; //〇、×は何番目にあるか
ll ans=0;

int main(){
  cin>>n>>s;

  for(int i=0; i<n; i++){
    if(s[i]=='o'){
      maru.push_back(i);
    }
    else if(s[i]=='x'){
      batu.push_back(i);
    }
  }

  for(int i=0; i<n; i++){
    //〇より先に×があるならばansに×以降の文字数を加える。
    if(s[i]=='o'){
      int pos=lower_bound(batu.begin(), batu.end(), i)-batu.begin();
      if(pos<(int)batu.size()){
        ans+=(n-batu[pos]);

        //cout<<batu[pos]<<endl;
      }
    }
    else if(s[i]=='x'){
      int pos=lower_bound(maru.begin(), maru.end(), i)-maru.begin();
      if(pos<(int)maru.size()){
        ans+=(n-maru[pos]);

      }
    }
    
  }

  cout<<ans<<endl;


  return 0;
}
    
