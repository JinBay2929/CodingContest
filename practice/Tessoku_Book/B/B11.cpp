
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


int n, q;
int a[100009], x[100009];


int main(){
  cin>>n;
  for(int i=1; i<=n; i++){
    cin>>a[i];
  }
  cin>>q;

  for(int i=1; i<=q; i++){
    cin>>x[i];
  }

  sort(a+1, a+n+1);


  for(int i=1; i<=q; i++){
    cout<<lower_bound(a+1, a+n+1, x[i])-a-1<<endl;
  }
   
  return 0;
}
    
