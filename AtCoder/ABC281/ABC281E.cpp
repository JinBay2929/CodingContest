
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


int n, k, m;
long long a[200009], s[200009];

int maxsum(int a[], int n){
  vector<int> tmp;
  int len=sizeof(a), ans=0;
  for(int i=0; i<len; i++)tmp.push_back(a[i]);

  sort(tmp.begin(), tmp.end());

  for(int i=len-1; i>len-n-1; i--){
    ans+=tmp[i];
  }

  return ans;
}

int main(){
  cin>>n>>m>>k;
  
  for(int i=1; i<=n; i++)cin>>a[i];

  a[0]=0;
  s[0]=0;
  s[1]=a[1];
  for(int i=2; i<=n; i++){
    s[i]=s[i-1]+a[i];
  }


  for(int i=0; i<=k-1; i++){
    long long secsum=s[m+i]-s[i];

    for(int i=0; i<m-k; i++){
      
    }
  }

 

  return 0;
}
    
