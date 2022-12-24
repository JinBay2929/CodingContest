
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


long long n, q, a[100009];

int main(){
  cin>>n;

  for(int i=1; i<=n; i++)cin>>a[i];

  cin>>q;

  for(int i=1; i<=q; i++){
    int type, k, x;
    cin>>type;

    if(type==1){
      cin>>k>>x;
      a[k]=x;
    }
    else{
      cin>>k;
      cout<<a[k]<<endl;;
    }
  
  }



  return 0;
}
    
