
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


//愚直解でTLE
int t, n, d, k;


int main(){
  cin>>t;

  for(int i=1; i<=t; i++){
    cin>>n>>d>>k;
    set<int> sign;
    int cnt=0, x=0, a=0;

    sign.insert(x);
    cnt++;
    while(cnt<k){
      x=(x+d)%n;
      while(sign.count(x)){
        x=(x+1)%n;
      }
      sign.insert(x);
      cnt++;
    }

    cout<<x<<endl;



  }


  return 0;
}
    

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

int t, n, d, k;


int main(){
  cin>>t;

  for(int i=1; i<=t; i++){
    cin>>n>>d>>k;
    int x=0, cnt=1, bottom=1;

    d%=n;

    for(int j=1; j<=n-1; j++){
      if(cnt==k)break;

      x+=d;
      if(x>=n){
        x=bottom;
        bottom++;
      }

      cnt++;
    }

    cout<<x<<endl;


  }


  return 0;
}
    
