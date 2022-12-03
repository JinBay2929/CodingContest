
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


long long k, ans;
vector<long long> n;

int main(){
  cin>>k;

  long long powk=pow(k, 0.5);
  
  for(long long i=2; i<=powk; i++){
    while(true){
      if(k%i!=0)break;
      if(k%i==0)n.push_back(i);
      k/=i;
    }
  }

  cout<<powk;

  for(int i=0; i<n.size(); i++){
    cout<<n[i]<<endl;
  }

  
  //cout<<ans<<endl;

  return 0;
}
    
