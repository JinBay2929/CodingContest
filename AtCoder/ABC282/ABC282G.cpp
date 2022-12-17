
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

//理論上動くがnext_permutationを二重に回してるので絶対TLEする。

int n, k, p, sim;
long long ans=0;
vector<int> a, b;

int main(){
  cin>>n>>k>>p;
  
  for(int i=1; i<=n; i++){
    a.push_back(i);
    b.push_back(i);
  }

  


  do{
    do{
      sim=0;
      for(int i=0; i<n-1; i++){
        if((a[i+1]-a[i])>0  && (b[i+1]-b[i])>0)sim++;
        else if((a[i+1]-a[i])<0  && (b[i+1]-b[i])<0)sim++;
      }

      if(sim==k){
        ans++;
      }

    }while(next_permutation(b.begin(), b.end()));

  }while(next_permutation(a.begin(), a.end()));


  cout<<ans<<endl;

  return 0;
}
    
