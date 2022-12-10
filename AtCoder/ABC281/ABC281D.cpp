
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


int n, k, d, a;
long long ans=-1;
vector<int> as;
vector<long long> lis;

//TLE!!!

int main(){
  cin>>n>>k>>d;
  
  for(int i=1; i<=n; i++){
    cin>>a;
    as.push_back(a);
  }
  
  
  
  do{
    long long num=0;
    for(int i=0; i<k; i++){
      num+=as[i];
    }
    lis.push_back(num);
  }while(next_permutation(as.begin(), as.end()));


  
  sort(lis.begin(), lis.end());
  lis.erase(unique(lis.begin(), lis.end()), lis.end());

 
  int len=lis.size();

  for(int i=len-1; i>=0; i--){
    if(lis[i]%d==0){
      ans=lis[i];
      break;
    }
  }


  cout<<ans<<endl;

  return 0;
}
    
