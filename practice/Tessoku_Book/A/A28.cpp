
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


int n, ans=0, a[100009];
char t[100009];

int main(){
  cin>>n;

  for(int i=1; i<=n; i++)cin>>t[i]>>a[i];


  for(int i=1; i<=n; i++){
    if(t[i]=='+'){
      ans+=a[i];
    }
    else if(t[i]=='-'){
      ans-=a[i];
    }
    else if(t[i]=='*'){
      ans*=a[i];
    }
    if(ans<0)ans+=10000;
    ans%=10000;
    cout<<ans<<endl;
  }

  return 0;
}
    
