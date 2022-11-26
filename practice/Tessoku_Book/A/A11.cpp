
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


//配列の大きさをsizeof()で取ると面倒なのでnで解決
int search(int x, int n, int a[]){
  int L=1, R=n; 

  while(L<=R){
    int mid=(L+R)/2;
    if(x<a[mid]) R=mid-1;
    if(x>a[mid]) L=mid+1;
    if(x==a[mid]) return mid;
    
  }
}
int n, x, a[100009];
int l, r, mid;

int main(){
  cin>>n>>x;
  for(int i=1; i<=n; i++) cin>>a[i];
  
  int ans = search(x, n, a);

  cout<<ans<<endl;

  return 0;
}
    

    
    
    
    
